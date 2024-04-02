#include <stdio.h>

int main(){
    long long int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)    printf("0");
    else if((a+b)/2==c || (a+c)/2==b || (b+c)/2==a)    printf("1");
    else    printf("2");
}