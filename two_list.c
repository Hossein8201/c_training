#include <stdio.h>

int main(){
    int a,b,a1=0,a2=0;
    int list1[10000],list2[10000],list[10000];
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++)    scanf("%d",&list1[i]);
    for(int i=0;i<b;i++)    scanf("%d",&list2[i]);
    for(int i=0;i<a+b;i++){
        if(list1[a1]>list2[a2] || a1==a){    list[i]=list2[a2];      a2++;}
        else if(list1[a1]<=list2[a2]  || a2==b){      list[i]=list1[a1];      a1++;}
    }
    for(int i=0;i<a+b;i++)      printf("%d ",list[i]);
}