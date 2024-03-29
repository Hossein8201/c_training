#include <stdio.h>
#include <math.h>
#define DIFF(a,b,c) (((a)+(b)>(c) ? (1) : (0)))

int main(){
    int sum,a,b,c,jj=-1,n=0;
    scanf("%d",&sum);
    a=floor(sum/5);   b=floor(sum/5);     c=sum-a-b;
    for(int i=0;i<=ceil(0.2*sum);i++){
        jj+=1;
        for(int j=jj;j<=ceil(0.2*sum);j++){
            int    A=a+i,B=b+j,C=sum-A-B;
            if(A<B && DIFF(A,B,C) && DIFF(A,C,B) && DIFF(B,C,A)){  printf("%d %d %d\n",A,B,C);     n+=1;}
            else if(A==B && A==C && DIFF(A,B,C) && DIFF(A,C,B) && DIFF(B,C,A)){    printf("%d %d %d\n",A,B,C);     n+=1;}
        }
    }
    printf("%d",n);
}