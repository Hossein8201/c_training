#include <stdio.h>

long long int Eckerman_function(long long int m,long long int n){ // Eckerman function definition:
    if(m==0)    return n+1;
    else if(m>0 && n==0)    return Eckerman_function(m-1,1);
    else if(m>0 && n>0)     return Eckerman_function(m-1,Eckerman_function(m,n-1));
}

int main(){
    long long int m,n;
    scanf("%lld %lld",&m,&n);
    printf("%lld\n",Eckerman_function(m,n));
}
