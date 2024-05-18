#include <stdio.h>
#include <string.h>

int operation;
char string[10000000];

void search_character(){    // this function change a character in string
    char character_edit;    char character_new;     getchar();
    printf("type your character you want to edit:  ");     scanf("%c",&character_edit);     getchar();
    printf("type your new character:  ");     scanf("%c",&character_new);  
    // find your character and exchange it.
    for(int i=0;i<strlen(string);i++){
        if(string[i] == character_edit)     string[i] = character_new;      
    }
    printf("--->\nyour new string:  %s\n\n",string);    // the result
}

void search_string(){   // this function change a word in string
    char word_edit[10000];      char word_new[10000];   getchar();
    printf("type your word you want to edit:  ");        gets(word_edit);
    printf("type your new word:  ");     gets(word_new);
    // find your word and exchange it.
    char *pointer = strstr(string,word_edit);   // returns the ponter of position of word in string
    if(pointer){
        char string_copy[1000000];    int position;
        do{ 
            position = pointer - string;    strcpy(string_copy,"");
            strncat(string_copy,string,position);    strcat(string_copy,word_new);
            pointer += strlen(word_edit);      strcat(string_copy,pointer);
            strcpy(string,string_copy);     strcat(string,"\0");    // exchange with new word
            pointer = strstr(string,word_edit);     // find the next position of word in string if exist.
        } while(pointer);
        printf("--->\nyour new string:  %s\n\n",string);
    }
    else    printf("--->\nyour word not in string!\n\n");
}

int main(){
    printf("Enter your string:  ");       gets(string);   // give the string
    while(operation != 5){      // the poeratino that you want to do
        printf("what do you want to do?\n");
        printf("1-) change a character\n");
        printf("2-) change a word\n");
        printf("5-) nothing and exit\n");   // your exit bet.
        printf("your choice:  ");
        scanf("%d",&operation);
        if(operation == 1)  search_character();
        else if(operation == 2)     search_string();
    }
    printf("--->\nthe program ended :-) "); 
}