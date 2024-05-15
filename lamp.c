// https://quera.org/problemset/9021?tab=description
#include <stdio.h>
#include <stdlib.h>

int swap(const void *number1,const void *number2){
    int num1 = *((int *) number1);
    int num2 = *((int *) number2);
    return (num1>num2) ? 1 : (num1==num2) ? 0 : -1;
}

int main(){
    int number_lamps;
    scanf("%d",&number_lamps);
    int lamp[100000],status,lamp_on[100000],index=0;
    for(int i=0;i<number_lamps;i++)     scanf("%d",& lamp[i]);
    for(int i=0;i<number_lamps;i++){    scanf("%d",& status);    if(status==1)    lamp_on[index++]=lamp[i];}
    qsort(lamp_on,index,sizeof(int),swap);
    for(int i=0;i<index;i++)    printf("%d ",lamp_on[i]);
}