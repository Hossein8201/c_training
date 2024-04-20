#include <stdio.h>
#include <math.h>

double sum_left(int n){
    double sum1=0;
    for(int i=1;i<=pow(2,n);i++)     sum1+=(1.0/i);
    return sum1;
}

double sum_right(int n){
    double sum2=0;
    for(int j=pow(2,n);j>=1;j--)     sum2+=(1.0/j);
    return sum2;
}

int main(){
    int n;
    double sum1,sum2;
    scanf("%d",&n);
    while(1){
        sum1=sum_left(n);       
        sum2=sum_right(n);
        if(sum1==sum2)     printf("%.17lf  %.17lf\n",sum1,sum2);
        else{       printf("%.17lf  %.17lf\n",sum1,sum2);     break;}
        n++;
    }
    printf("%d",n);
}
