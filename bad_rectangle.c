#include <stdio.h>
#include <math.h>
#define DIFF(i,j,c) (((i)+(j)>(c) ? (1) : (0)))

int main(){
    int sum,a,b,c,n=0;
    scanf("%d",&sum);
    if(sum%2==0)    a=2;     else   a=1;    
    for(int i=a;i<=floor(sum/3);i++){
        b=floor((sum-i)/2);
        for(int j=b;j>=ceil(sum/3);j--){
            c=sum-i-j;
            if(DIFF(i,j,c))    n+=1;
        }
    }
    printf("%d",n);
}