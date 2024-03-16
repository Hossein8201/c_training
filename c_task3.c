#include <stdio.h>

int main(){
    int amount,number,min=0,max=0;
    float sum=0;
    scanf("%d",&amount);
    for(int i=0;i<amount;i++){
        scanf("%d",&number);
        if (min ==0) min = number;
        sum += number;
        if (number > max) max = number;
        if (number < min) min = number;
    }
    printf("%.3f %d %d",(sum/amount),min,max);
}