#include <stdio.h>

int main(){
    int n,m,nf=0,mf=0;
    char column[1000000];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",column);
        for(int j=0;j<m;j++){   if(column[j]=='*')     nf+=1;}
    }
    for(int i=0;i<n;i++){
        scanf("%s",column);
        for(int j=0;j<m;j++){   if(column[j]=='*')     mf+=1;}
    }
    printf("%d %d",nf,mf);
}