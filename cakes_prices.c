#include <stdio.h>

int main(){
    int n,t,chart[100000],min=1000000,max=0;
    scanf("%d %d",&n,&t);
    if(t==1){   for(int i=0;i<n;i++){    scanf("%d",&chart[i]);    if(chart[i]>max)     max=chart[i];}    printf("%d",max);}
    else if(t>=3){    for(int i=0;i<n;i++){    scanf("%d",&chart[i]);   if(chart[i]<min)    min=chart[i];}     printf("%d",min);}
    else{ for(int i=0;i<n;i++) scanf("%d",&chart[i]); min=chart[0]; max=chart[n-1]; if(min<=max) printf("%d",min); else printf("%d",max);}
}