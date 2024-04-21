// https://quera.org/problemset/20257
#include <stdio.h>

int main(){
    long long int k,a,b,time=0;
    scanf("%lld %lld %lld",&k,&a,&b);
    if(a<0)     a+=(-2)*a;     b+=(-2)*a;
    if(b<0)     b+=(-2)*b;     a+=(-2)*b;
    if(a%k >= k/2.0){    time+=(k-a%k);     a+=(k-a%k);}     
    else{     time+=a%k;    a-=a%k;}    
    b-=a;
    if(b%k > k/2.0)      time+=(b/k)+1+k-b%k;
    else    time+=b/k+b%k;
    printf("%d",time);
}