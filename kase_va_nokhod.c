#include <stdio.h>

int main(){
    int n,transform[10000][2];
    scanf("%d",&n);
    for (int i=0;i<n;i++)  scanf("%d %d",&transform[i][1],&transform[i][2]);
    printf("%d",transform[n-1][2]);
}