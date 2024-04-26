#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<(n/2)+1;i++){
        for(int j=0;j<i;j++)    printf(" ");
        for(int j=(n/2)-i;j>=1;j--)       printf("* ");       printf("*");
        for(int j=0;j<i;j++)    printf(" ");
        printf("\n");
    }
    for(int i=0;i<(n/2);i++){
        for(int j=(n/2)-1-i;j>=1;j--)   printf(" ");
        for(int j=1;j<i+2;j++)      printf("* ");       printf("*");
        for(int j=(n/2)-1-i;j>=1;j--)     printf(" ");
        printf("\n");
    }
}