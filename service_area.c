// https://quera.org/problemset/136483
#include <stdio.h>

int main(){
    int number,list_servise[100000]={0};
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        int min,max;       scanf("%d %d",&min,&max);
        for(int j=min;j<=max;j++)       list_servise[j]=j;
    }
    int final_min,final_max;       scanf("%d %d",&final_min,&final_max);
    for(int i=final_min;i<=final_max;i++)       if(list_servise[i]==0){     printf("false");      return 0;}
    printf("true");
}