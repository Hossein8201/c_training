// https://quera.org/problemset/228669?tab=description
#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>2 && m>2)      printf("%d",n*m-(n-2)*(m-2));
    else    printf("%d",n*m);
}