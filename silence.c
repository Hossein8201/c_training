// https://quera.org/problemset/140033?tab=description
#include <stdio.h>
#include <string.h>

int main(){
    int answer=0;
    char question[1000000],voice[]= {'i','a','u','e','o'};
    gets(question);
    for(int i=0;i<strlen(question);i++)
        for(int j=0;j<5;j++)    if(question[i]==voice[j])   answer++;
    printf("%d",answer);

}