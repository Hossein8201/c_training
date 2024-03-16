#include <stdio.h>
#include <stdlib.h>

int main(){
    long int number;
    int num1,num2,value=0;
    scanf("%ld",&number);
    while(number-(number%10) !=0){
        num1 = number%10;
        num2 = (number%100-num1)/10;
        if (num2== num1){
            printf("yes");
            value =1;
            break;
        }
        number = (number - num1)/10;
    }
    if (value ==0) printf("no");
}
