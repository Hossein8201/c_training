#include <stdio.h>
#include <string.h>

int main(){
    int a=0,b=0,n;
    char c[6],answer[100000]="";
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&c);
        for(int j=0;j<5;j++){
            if(c[j]=='A')  a+=1;
            else if(c[j]=='B')   b+=1;
        }
        if(a>b)  strcat(answer,"A");
        else if(b>a)    strcat(answer,"B");
        a=0;  
        b=0;
    }
    for(int i=0;i<n;i++)    printf("%c\n",answer[i]);
}