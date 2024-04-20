// https://quera.org/problemset/52543
#include <stdio.h>
int n;

void Max_Min(int list[],int i){
    int tem;
    if(list[i] < list[i+1]){      tem=list[i];    list[i]=list[i+1];    list[i+1]=tem;}
    for(int j=i;j<n;j++){
        if(list[j] < list[i+1]){      tem=list[j];    list[j]=list[i+1];    list[i+1]=tem;}
        if(list[j] > list[i]){      tem=list[j];    list[j]=list[i];    list[i]=tem;}
    }
}

int main(){
    int list[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)    scanf("%d",&list[i]);
    for(int i=0;i<n/2;i++)    Max_Min(list,2*i);
    for(int i=0;i<n;i++)    printf("%d ",list[i]);
}