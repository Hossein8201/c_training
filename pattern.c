#include <stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++)       printf("%d",j);
        for(int j=number*2-1-2*i;j>=1;j--)      printf(" ");
        for(int j=i;j>=1;j--)   if(number!=j)   printf("%d",j);
        printf("\n");
    }
}