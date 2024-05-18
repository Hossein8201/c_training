#include <stdio.h>

void factorial(int *sum,int number){
    *sum = 1;
    for(int i=2;i<=number;i++){
        *sum *= i;
    }
}

int main(){
    int number,result;
    scanf("%d",&number);
    factorial(&result,number);
    printf("%d",result);
}
