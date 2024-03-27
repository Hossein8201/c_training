#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    a*=a;   b*=b;   c*=c;
    if(a>b && a>c && a==b+c)    printf("1");
    else if(b>a && b>c && b==a+c)   printf("1");
    else if(c>a && c>b && c==a+b)   printf("1");
    else    printf("0");
}