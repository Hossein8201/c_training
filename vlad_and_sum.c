#include <stdio.h>

int main(){
    int n,t,vlad,sum=0,answer[200000],digit=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        for(int j=1;j<t+1;j++){    digit=j;     while(digit!=0){     vlad=digit%10;     digit=(digit-vlad)/10;      sum+=vlad;}}
        answer[i] = sum;
        sum=0;
    }
    for(int i=0;i<n;i++)    printf("%d\n",answer[i]);
}