// https://quera.org/problemset/221463
#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0)    printf("A");
            else if(i==m-1)      printf("B");
            else if(j==0)      printf("A");
            else if(j==n-1)     printf("B");
            else    printf(".");
        }
        printf("\n");
    }
}