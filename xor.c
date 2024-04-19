#include <stdio.h>

int main(){
    int n,odd=0;
    scanf("%d",& n);
    int list[n];
    for(int i=0;i<n;i++){    scanf("%d",&list[i]);     odd^=list[i];}
    printf("%d",odd);
}