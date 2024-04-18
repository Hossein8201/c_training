#include <stdio.h>

int main(){
    char string[100001];
    int flag=1;
    scanf("%s",string);
    for(int i=0;i<strlen(string);i++){
        if(string[i]=='0' && flag)      continue;
        else{printf("%c",string[i]);    flag=0;}
    }
    if(flag)    printf("0");
}