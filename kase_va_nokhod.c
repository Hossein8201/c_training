#include <stdio.h>

int main(){
    int n,kase1,kase2,start=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&kase1,&kase2);
        if(kase1==start)     start=kase2;
        else if(kase2==start)      start=kase1;
    }
    printf("%d",start);
}