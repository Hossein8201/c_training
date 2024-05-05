// https://quera.org/problemset/3411?tab=description
#include <stdio.h>

int main(){
    long long int number,sum=1,sum_=1;
    scanf("%lld",&number);
    for(int i=1;i<=number;i++){     int j=i;  
       // while(j%1000==0)    j/=1000;   j%=1000;     
        sum*=j;   while(sum%100==0)   sum/=1000;      sum%=1000;
    }  
    if(sum%10==0)   printf("%lld",sum/10);
    else    printf("%lld",sum%10);    
}