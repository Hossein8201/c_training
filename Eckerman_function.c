#include <stdio.h>

int Eckerman_function(int m,int n){
    if(m==0)    return n+1;
    else if(m>0 && n==0)    return Eckerman_function(m-1,1);
    else if(m>0 && n>0)     return Eckerman_function(m-1,Eckerman_function(m,n-1));
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d\n",Eckerman_function(m,n));
}
