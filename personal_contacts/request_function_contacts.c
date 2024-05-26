#include "request_function_contacts.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

contact_structure contacts[10000];
int member=0;
char type_sort[100] = "adding_time";
FILE *file_open;  

void show_member(int i){
    printf("\tthe member of number \'%d\' = { ",i+1);
    printf("first name: %s, last name: %s, phone number: %s, age: %d }\n",contacts[i].first_name,contacts[i].last_name,contacts[i].phone_number,contacts[i].age);
}

void show(){
    if(member != 0){     printf("--->the information of members sorted by \'%s\' :\n",type_sort);
    for(int i=0;i<member;i++)     if(contacts[i].valid == 1)      show_member(i);}
    else    printf("--->you don't anything to show that!\n");
}

void add(){
    // if(contacts == NULL)    contacts = (contact_structure *) malloc(sizeof(contact_structure));
    // else   contacts = (contact_structure *) realloc(contacts,1*sizeof(contact_structure));
    printf("--->Enter information of your new person :\n");
    printf("first name:  ");    gets(contacts[member].first_name);
    printf("last name:  ");     gets(contacts[member].last_name);
    printf("phone number:  ");     gets(contacts[member].phone_number);
    printf("age:  ");     scanf("%d",&contacts[member].age);    getchar();
    contacts[member].valid = 1;
    member++;
    if(strcmp(type_sort,"adding_time") != 0)    qsort(contacts,member,sizeof(contact_structure),list_sort);
    printf("--->adding process was successful. \n");
}

void search(){
    printf("--->Enter your details that you want based on search a person :\n");
    printf("1--) first name    2--) last name    3--) phone number    4--) age    5--) number of list\nyour choice :  ");
    int detail;     scanf("%d",&detail);    getchar();   int member_number = -1;
    if(detail == 1){
        printf("your search amount :  ");     char f_name[1000];      gets(f_name);
        for(int i=0;i<member;i++)     if(strcmp(f_name,contacts[i].first_name) == 0){   member_number = i;    break;}  
    }
    else if(detail == 2){
        printf("your search amount :  ");     char l_name[1000];      gets(l_name);
        for(int i=0;i<member;i++)     if(strcmp(l_name,contacts[i].last_name) == 0){   member_number = i;    break;}  
    }
    else if(detail == 3){
        printf("your search amount :  ");     char phone_num[1000];      gets(phone_num);
        for(int i=0;i<member;i++)     if(strcmp(phone_num,contacts[i].phone_number) == 0){   member_number = i;    break;}  
    }
    else if(detail == 4){
        printf("your search amount :  ");     int age;     scanf("%d",&age);
        for(int i=0;i<member;i++)     if(age == contacts[i].age){   member_number = i;    break;}  
    }
    else if(detail == 5){
        show();     printf("your search amount :  ");   int number;     scanf("%d",&number);    member_number = number -1;
    }
    if(member_number == -1){   printf("--->you don't have such person !\n");   return ;}
    show_member(member_number);
    printf("\n--->if you want to delete that press \'1\' or if you want to update the information of that, press \'2\' :\nyour choice :  ");
    int operation;      scanf("%d",&operation);     getchar();
    if(operation == 1)      delete_member(member_number);
    else    update(member_number);
}

void delete_member(int member_number){
    printf("\n--->do you really want to delete that ?     1--) Yes     2--) No\nyour answer:  ");    
    int answer;    scanf("%d",&answer);      getchar();
    if(answer == 1){    contacts[member_number].valid = 0;   
        qsort(contacts,member,sizeof(contact_structure),list_sort);   
        printf("--->the deletion process was successful\n");
    }
    else    printf("--->the deletion process was canceled\n");
}

void update(int member_number){
    int turn = 0;
    while(turn != 5){
        printf("\n--->Enter your details you want to change that :\n");
        printf("1--) first name     2--) last name     3--) phone number     4--) age     5--) nothing\nyour choice:  ");
        scanf("%d",&turn);      getchar();
        if(turn == 1){
            printf("print your new details :  ");     char new_detail[1000];   gets(new_detail);
            strcpy(contacts[member_number].first_name,new_detail);
            show_member(member_number);     printf("--->editing was successful.\n"); 
        }     
        else if(turn == 2){
            printf("print your new details :  ");     char new_detail[1000];   gets(new_detail);
            strcpy(contacts[member_number].last_name,new_detail);
            show_member(member_number);     printf("--->editing was successful.\n"); 
        }   
        else if(turn == 3){
            printf("print your new details :  ");     char new_detail[1000];   gets(new_detail);
            strcpy(contacts[member_number].phone_number,new_detail);
            show_member(member_number);     printf("--->editing was successful.\n"); 
        }       
        else if(turn == 4){
            printf("print your new details :  ");     int new_detail;    scanf("%d",&new_detail);     getchar();
            contacts[member_number].age = new_detail;
            show_member(member_number);     printf("--->editing was successful.\n"); 
        } 
    }
    if(strcmp(type_sort,"adding_time") != 0)    qsort(contacts,member,sizeof(contact_structure),list_sort);
    printf("\n--->updating was successful.\n");  
}

void sort(){
    printf("--->what type you want to sort the information ?\n1) first name     2) last name     3) age\nyour choise: ");
    int sorting_type;   scanf("%d",&sorting_type);      getchar();
    if(sorting_type == 1)      strcpy(type_sort,"first_name");
    else if(sorting_type == 2)      strcpy(type_sort,"last_name");
    else if(sorting_type == 3)      strcpy(type_sort,"age");    
    qsort(contacts,member,sizeof(contact_structure),list_sort);      show();
}

int list_sort(const void *list1,const void *list2){
    contact_structure *li1 = ((contact_structure *) list1);
    contact_structure *li2 = ((contact_structure *) list2);
    int bet1 = li1->valid;
    int bet2 = li2->valid;
    if(bet1 == 1 && bet2 == 1){
        if(strcmp(type_sort,"first_name")==0){
            char *f_name1 = li1->first_name;
            char *f_name2 = li2->first_name;
            return (strcmpi(f_name1,f_name2) > 0 ) ? 1 : (strcmp(f_name1,f_name2) == 0) ? 0 : -1;
        }
        else if(strcmp(type_sort,"last_name")==0){
            char *l_name1 = li1->last_name;
            char *l_name2 = li2->last_name;
            return (strcmpi(l_name1,l_name2) > 0 ) ? 1 : (strcmp(l_name1,l_name2) == 0) ? 0 : -1;
        }
        else{
            int age1 = li1->age;
            int age2 = li2->age;
            return (age1 > age2 ) ? 1 : (age1 == age2) ? 0 : -1;
        }
    }
    else if(bet1 == 0 && bet2 == 1)     return 1;
    else if(bet1 == 1 && bet2 == 0)     return -1;
    else    return 0;
}

void save_exit(){
    printf("--->if you really want to save changes in your File \'personal_contacts.txt\' press \'1\' or not press \'2\' :\nyour choice :  ");
    int condition;      scanf("%d",&condition);   getchar();
    if(condition == 1){
        file_open = fopen("C:\\Users\\adibianstore\\OneDrive\\Desktop\\personal_contacts.txt", "w+");
        fseek(file_open,0,SEEK_SET);
        fprintf(file_open,"your personal contacts informations sorted by %s :\n",type_sort);
        for(int i=0;i < member;i++){
            if(contacts[i].valid == 1){
                fprintf(file_open,"contact %d -->\t",i+1);
                strcat(contacts[i].first_name," ");     strcat(contacts[i].first_name,contacts[i].last_name);
                fprintf(file_open,"%-20s : %-2d years old : %s\n",contacts[i].first_name,contacts[i].age,contacts[i].phone_number);
            }
        }
        printf("--->your changes successfully saved in your File.\n");
        // free(contacts);
        fclose(file_open);
    }
    printf("--->the saving process was canceled.\n");
}
