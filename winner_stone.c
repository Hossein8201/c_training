// https://quera.org/problemset/3109?tab=description
#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int number;
    scanf("%lld",&number);
    while(1){
        if(number==1){      printf("Yes");      exit(0);}
        else if(number==0 || number==3){     printf("No");       exit(0);}
        else if(number%2==0){   while(number%2==0)      number/=2;}
        else{   number = number*3+3;}
    }
}