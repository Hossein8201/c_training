#include <stdio.h>

int prime(int number){
    for(int i=2;i<=number/2;i++)     if(number%i==0)     return 0;
    return 1;
}

int main(){
    int number,sum=0;
    scanf("%d",&number);
    for(int i=2;i<=number;i++){
        if(prime(i)){    sum+=i;}
    }
    printf("%d",sum);
}