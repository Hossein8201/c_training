// https://quera.org/problemset/175188?tab=description
#include <stdio.h>
#include <string.h>

int main(){
    int days,answer[10000];
    scanf("%d ",&days);
    for(int i=0;i<days;i++){
        int number=0;
        char question[10000];
        gets(question);
        for(int j=0;j<strlen(question);j++)  if((question[j]=='0' && question[j-1]=='1') || (j == 0 && question[j]=='0'))  number++;
        answer[i] = number;    
    }
    for(int i=0;i<days;i++)     printf("%d\n",answer[i]);
}