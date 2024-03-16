#include <stdio.h>
#include <math.h>

int main(){
    int a,b,limit,bet=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        limit = (int) sqrt(i);
        for(int j=2;j<=limit;j++){
            //printf("%d %d %d\n",i,j,i%j);
            if(i%j==0){
                bet=1;
                break;
            } 
        }
        if(bet==0 && i!=1) printf("%d\n",i);
        bet =0;
    }
}