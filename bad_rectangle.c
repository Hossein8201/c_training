#include <stdio.h>
#include <math.h>
#define DIFF(a,b,c) (((a)+(b)>(c) ? (1) : (0)))

int main(){
    int sum,a,b,c,jj=-1,n=0;
    scanf("%d",&sum);
    a=floor(sum/5);   b=floor(sum/5);     c=sum-a-b;
    for(int i=a;i<=floor(sum/3);i++){
        jj=a+1;
        for(int j=jj;j<=ceil(sum/2);j++){
            int     C=sum-i-j;
            if(i<j && DIFF(i,j,C) && DIFF(i,C,j) && DIFF(j,C,i)){    printf("%d %d %d\n",i,j,C);     n+=1;}
            else if(i==j && i==C && DIFF(i,j,C) && DIFF(i,C,j) && DIFF(j,C,i)){    printf("%d %d %d\n",i,j,C);     n+=1;}
        }
    }
    printf("%d",n);
}