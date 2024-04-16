#include <stdio.h>

int main(){
    int number,base,leftover,sum1=0,sum2=0,turn=0;
    scanf("%d %d",&number,&base);
    while(number>0){
        leftover=number%base;
        if(turn%2==0)     sum1+=leftover;
        else    sum2+=leftover;
        number=(number-leftover)/base;
        turn+=1;
    }
    if(sum1==sum2)      printf("Yes");
    else    printf("No");
}