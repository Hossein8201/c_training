#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show_member(int i);
void show();
void add();    
void delete(int member_number);
void update(int member_number); 
void search();
//void sort();
//void save_exit();    

typedef struct{
    char first_name[1000],last_name[1000],phone_number[1000];
    int age;
    int valid;
} list_contacts;

list_contacts *contacts = NULL;
int member;
char *type_sort = "adding time";

int main(){
    printf("Welcome to aplication contasts. please choose your order:");
    while(1){
        printf("\n1--) show information of a person.\n");
        printf("2--) add a person.\n");
        printf("3--) delete or update or search a person.\n");
        printf("4--) sort the informations.\n");
        printf("5--) save and exit.\n");
        int order;    scanf("%d",&order);   getchar();
        switch(order){
            case 1:     show();     break;
            case 2:     add();      break;
            case 3:     search();      break;
            //case 4:     sort();      break;
            //case 5:     save_exit();      break;
            default:    printf("--->your choose isn't correcr. please choose carefully! \n");
        }
    }
}

void show_member(int i){
    printf("the member of number \'%d\' ={ ",i+1);
    printf("first_name: %s, last_name: %s, phone_number: %s, age: %d }\n"
        ,contacts[i].first_name,contacts[i].last_name,contacts[i].phone_number,contacts[i].age);
}

void show(){
    if(member != 0)     printf("--->the information of members sorted by \'%s\':\n",type_sort);
    else    printf("--->you don't anything to show that!\n");
    for(int i=0;i<member;i++)     if(contacts[i].valid == 1)      show_member(i);     
}

void add(){
    if(contacts == NULL)    contacts = (list_contacts *) malloc(1*sizeof(list_contacts));
    else    contacts = (list_contacts *) realloc(contacts,1*sizeof(list_contacts));
    printf("Enter information of your new person: \n");
    printf("first name:  ");    gets(contacts[member].first_name);
    printf("last name:  ");   gets(contacts[member].last_name);
    printf("phone number:  ");     gets(contacts[member].phone_number);
    printf("age:  ");     scanf("%d",&contacts[member].age);
    contacts[member].valid = 1;
    member++;
    printf("--->added was seccesful. \n");
}

void search(){
    printf("Enter your detail you want to based on search a person:\n\\
    1--) first name\t2--) last name\t3--) phone number\t4--) age\nyour choice:  ");
    int detail;     scanf("%d",&detail);    int member_number=-1;
    if(detail == 1){
        printf("your search amount:  ");     char *f_name="";      gets(f_name);
        for(int i=0;i<member;i++)     if(strcmp(f_name,contacts[i].first_name) == 0){   member_number = i;    break;}  
    }
    else if(detail == 2){
        printf("your search amount:  ");     char *l_name = "too";      gets(l_name);
        for(int i=0;i<member;i++)     if(strcmp(l_name,contacts[i].last_name) == 0){   member_number = i;    break;}  
    }
    else if(detail == 3){
        printf("your search amount:  ");     char *phone_num="";      gets(phone_num);
        for(int i=0;i<member;i++)     if(strcmp(phone_num,contacts[i].phone_number) == 0){   member_number = i;    break;}  
    }
    else if(detail == 4){
        printf("your search amount:  ");     int age;     scanf("%d",&age);
        for(int i=0;i<member;i++)     if(age == contacts[i].age){   member_number = i;    break;}  
    }
    if(member_number == -1){   printf("--->you don't have such person!\n");   return ;}
    show_member(member_number);
    printf("if you want to delete that press 1 or if you want to update the information of that, press 2: ");
    int operation;      scanf("%d",&operation);
    if(operation == 1)      delete(member_number);
    else    update(member_number);
}

void delete(int member_number){
    printf("do you want to delete that really?\n1--) Yes\t2--) No\nyour answer:  ");    int answer;    scanf("%d",&answer);
    if(answer == 1)     contacts[member_number].valid = 0;
}

void update(int member_number){
    int turn = 0;
    while(turn != 5){
        printf("Enter your detail you want to change that:\n\\
        1--) first name\t2--) last name\t3--) phone number\t4--) age\t5--) nothing\nyour choice:  ");
        scanf("%d",&turn);
        if(turn == 1){
            printf("print your new detail:  ");     char *new_detail="";   gets(new_detail);
            *contacts[member_number].first_name = *new_detail;
        }     
        else if(turn == 2){
            printf("print your new detail:  ");     char *new_detail="";   gets(new_detail);
            *contacts[member_number].last_name = *new_detail;
        }   
        else if(turn == 3){
            printf("print your new detail:  ");     char *new_detail="";   gets(new_detail);
            *contacts[member_number].phone_number = *new_detail;
        }       
        else if(turn == 4){
            printf("print your new detail:  ");     int new_detail;    scanf("%d",&new_detail);
            contacts[member_number].age = new_detail;
        } 
    }    
}