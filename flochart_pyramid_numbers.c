#include <stdio.h>

int main(){
    int a,b,c,a2,b2,c2;
    scanf("%d %d %d",&a,&b,&c);
    a2=a*a;     b2=b*b;     c2=c*c;
    if(a>b){
        if(a>c){    if(a2==b2+c2)   printf("1");    else    printf("0");}
        else{   if(c2==a2+b2)   printf("1");    else    printf("0");}
    }
    else{
        if(b>c){    if(b2==c2+a2)   printf("1");    else    printf('0');}
        else{   if(c2==a2+b2)   printf("1");    else    printf("0");}
    }
}