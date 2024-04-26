// https://quera.org/problemset/20257
#include <stdio.h>
#include <math.h>

void move_pattern(long long int k,long long int a,long long int b){
    long long int time=0,a1=a,b1=b;
    if(a>=0){
        if(a%k >= k-a%k){     time+=k-a%k;      a+=time;}
        else{   time+=a%k;    a-=time;}
    }
    else{
        if(fabs(a%k) > k-fabs(a%k)){     time+=k-fabs(a%k);      a-=time;}
        else{   time+=fabs(a%k);    a+=time;}
    }
    b-=a;
    if(b%k > k/2.0)      time+=(b/k)+1+k-b%k;
    else    time+=b/k+b%k;
    if(time<b1-a1)    printf("%lld",time);    else    printf("%lld",b1-a1);
}

int main(){
    long long int k,a,b;
    scanf("%lld %lld %lld",&k,&a,&b);
    if(a<b)     move_pattern(k,a,b);
    else if(a>b)    move_pattern(k,b,a);
    else    printf("0");
}