#include <stdio.h>
#include <math.h>

int fac(int f){
    int ans=1;
    for(int j=2;j<f+1;j++)    ans*=j;
    return ans;
}

int main(){
    int a,x,n,xa=0,answer,nf;
    scanf("%d %d %d",&a,&x,&n);
    nf = fac(n);
    for(int i=0;i<n+1;i++){
        answer = nf/(fac(i)*fac(n-i));
        xa+=answer*pow(x,i)*pow(a,n-i);

    }
    printf("%d",xa);
}