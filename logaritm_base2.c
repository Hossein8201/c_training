#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",& n);
    for (int i=0;pow(2,i) <= n;i++) if(pow(2,i+1) > n)  printf("%d",i); 
}