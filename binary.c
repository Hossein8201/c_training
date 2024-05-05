// https://quera.org/problemset/15125
#include <stdio.h>
#include <string.h>

int main(){
    char string[100000];
    char list[100000];
    scanf("%s",list);
    int flag=1,index=strlen(list);
    for(int i=0;i<index;i++){
        if(list[i]=='0' && flag)      continue;
        else{   strncpy(string,list+i,index-i);     string[index-i]='\0';      printf("%s",string);    flag=0;   break;}
    }
    if(flag)    printf("0");
}