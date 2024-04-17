#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[1000001]={},answer[1000001]={};
    int flag=0;
    scanf("%s",& string);
    for(int i=0;i<strlen(string);i++){
        if(string[i]=='0' && flag==0) continue;
        else {
            flag=1;
            if (string[i]=='0')  strcat(answer,"0");
            else  strcat(answer,"1");
        }
    }
    printf("%s",answer);
}