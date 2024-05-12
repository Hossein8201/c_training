#include <stdio.h>

long int list_answer[100000];

int main(){
    int turn,number;
    scanf("%d",&turn);
    for(int i=0;i<turn;i++){
        scanf("%d",&number);
        long int list_lights[100000];
        for(int j=0;j<number;j++)   scanf("%ld",&list_lights[j]);
        long int sum[100000]={0};
        for(int j=1;j<=number/3+1;j++){
            for(int k=j-1;k<number;k+=3){
                sum[j]+=list_lights[k];
            }
            if(sum[j-1]<sum[j] && sum[j-1] != 0){    long int tem=sum[j];     sum[j]=sum[j-1];    sum[j-1]=tem;}
        }
        list_answer[i]=sum[number/3+1];
    }
    for(int i=0;i<turn;i++)     printf("%ld\n",list_answer[i]);
}