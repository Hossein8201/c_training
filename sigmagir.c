#include <stdio.h>

int main()
{
    int m,n;
    double result=0;
    scanf("%d %d",&n,&m);
    for(int i=-10;i<=m;i++){
        for(int j=1;j<=n;j++){
            int k=i+j;
            result+= (k*k*k)/(j*j);
        }
    }
    printf("%.0lf",result);
}