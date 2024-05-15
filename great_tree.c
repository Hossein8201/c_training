// https://quera.org/problemset/31026?tab=description
#include <stdio.h>

int main(){
    int n,m;
    char tree_n[1000000],tree_m[1000000];
    scanf("%d\n%s\n%d\n%s",&n,tree_n,&m,tree_m);
    printf("%d",n+m-2);
}