#include <stdio.h>
#include <stdlib.h>

void variable_address(int *list_number,char **list_string,int size_number,int size_string){
    printf("the list of numbers:\n");
    for(int i=0;i<size_number;i++){
        printf("%d : %p\n",*list_number,list_number);
        list_number++;
    }
    printf("\nthe list of characters:\n");
    for(int i=0;i<size_string;i++){
        printf("%s : %p\n",*list_string,list_string);
        list_string++;
    }
}

int main(){
    int list_number[] = {0,1,2,33,5,34,66,34,775,433,745,877};
    char *list_string[] = {"lhakh","lhs","h","iayreh","skyweiru"};
    int size_number = sizeof(list_number)/sizeof(int);
    int size_string = sizeof(list_string)/sizeof(list_string[0]);
    variable_address(list_number,list_string,size_number,size_string);
}