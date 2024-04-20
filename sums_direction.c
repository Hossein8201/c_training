#include <stdio.h>
#include <math.h>
long double sum1=0,sum2=0;

void sum_left(int n){
    for(int i=1;i<=pow(2,n);i++)     sum1+=(1.0/i);
}

void sum_right(int n){
     for(int j=pow(2,n);j>=1;j--)     sum2+=(1.0/j);
}

int main(){
    int n;
    scanf("%d",&n);
    while(1){
        sum_left(n);        sum_right(n);
        if(sum1==sum2)     printf("%Lf %Lf",sum1,sum2);
        else    break;
        n++;
    }
    printf("%d",n);
}
