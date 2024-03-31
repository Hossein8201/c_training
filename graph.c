#include <stdio.h>
#include <math.h>

int factorial(int a){
    int result=1;
    for(int i=2;i<=a;i++)  result*=i;
    return result; 
}

int main(){
    int n;
    scanf("%d",&n);
    if(n==1)    printf("0");
    else    printf("%d",factorial(n)/(factorial(n-2)*2));
}