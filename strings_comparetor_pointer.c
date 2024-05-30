#include <stdio.h>
#include <string.h>

int comparetor_two_strings(char *string1,char *string2,int size){
    for(int i=0;i<size;i++,string1++,string2++){
        if(*string1 != *string2)  return 0;
    }
    return 1;
}

int main(){
    char string1[100000],string2[100000];
    int size1,size2;
    gets(string1);      gets(string2);
    size1 = strlen(string1);
    size2 = strlen(string2);
    if(size1 != size2){     printf("this strings aren't the same!");    return 1;}
    else{
        if(comparetor_two_strings(string1,string2,size1))      printf("this strings are the same!");
        else    printf("this strings aren't the same!");
    }
}
