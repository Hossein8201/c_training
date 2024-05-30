// https://quera.org/problemset/140035?tab=description
#include <stdio.h>

int prime_number(int number){
    for(int i=2;i<=number/2;i++)    
        if(number%i == 0)   return 0;
    return 1;
}

int main(){
    int number;
    scanf("%d",&number);
    if(number%2 == 1)   if(prime_number(number) && number != 1){    printf("zoj");    return 1;}
    printf("fard");
}