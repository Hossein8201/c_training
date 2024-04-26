#include <stdio.h>

int main(){
    int t;
    long int n,list[1000];
    float a;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%ld",&n);
        scanf("%f",&a);
        long int sum=0;
        for(float j=0;j<n;j++)    sum+= (long int) (a+j/n);
        list[i]=sum;
    }
    for(int i=0;i<t;i++)    printf("%ld\n",list[i]);
}