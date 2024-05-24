#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string = NULL;
char str1[1000000],str2[1000000];

void concatination(){ // this function concatinate two string
    string = (char *) malloc((strlen(str1)+strlen(str2))*sizeof(char));     // allocate the memory for pointer
    for(int i=0;i<strlen(str1);i++)     string[i] = str1[i];
    for(int i=0;i<strlen(str2);i++)     string[i+strlen(str1)] = str2[i];
    printf("%s",string);    // print the result
}

int main(){ // give your strings you want to concatinate them:
    printf("give the first string: ");      gets(str1);     
    printf("give the second string: ");     gets(str2);
    concatination();
    free(string);
}