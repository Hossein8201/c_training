#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "request_function_contacts.h"

typedef struct{
    char first_name[1000],last_name[1000],phone_number[1000];
    int age;
    int valid;
} contact_structure;

contact_structure contacts[10000];
int member=0;
char type_sort[100] = "adding_time";
FILE *file_open;   

int main(){
    printf("--->Welcome to contacts application. this program save and edit your personal contacts informations.\n");

    file_open = fopen("C:\\Users\\adibianstore\\OneDrive\\Desktop\\personal_contacts.txt", "r");
    if(file_open != NULL){
        fseek(file_open,0,SEEK_SET);
        fscanf(file_open,"your personal contacts informations sorted by %s :\n",type_sort);
        while(fscanf(file_open,"contact %d -->\t") == 1){
            // if(contacts == NULL)    contacts = (contact_structure *) malloc(1*sizeof(contact_structure));
            // else    contacts = (contact_structure *) realloc(contacts,1*sizeof(contact_structure));
            fscanf(file_open,"%s %s",contacts[member].first_name,contacts[member].last_name);
            while(fscanf(file_open," "))    ;
            fscanf(file_open,": %d years old : %s\n",&contacts[member].age,contacts[member].phone_number);
            contacts[member].valid = 1;
            member++;
        }
        printf("--->the File \'personal_contacts.txt\' was successfully added.\n");
    }
    else{   printf("--->the File \'personal_contacts.txt\' was successfully created.\n");}  

    while(1){
        printf("\nchoose your request:\n");
        printf("1--) show information of a person.\n");
        printf("2--) add a person.\n");
        printf("3--) delete or update or search a person.\n");
        printf("4--) sort the informations.\n");
        printf("5--) save and exit.\n");
        int order;    scanf("%d",&order);   getchar();
        switch(order){
            case 1:     show();     break;
            case 2:     add();      break;
            case 3:     search();      break;
            case 4:     sort();     break;  
            case 5:     save_exit();      break;
            default:    printf("--->your choose isn't correct. please choose carefully! \n");
        }
    }
}

