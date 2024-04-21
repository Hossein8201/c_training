// https://quera.org/problemset/209103?tab=description
#include <stdio.h>

int main(){
    int n,m,flag=0;
    scanf("%d %d",&n,&m);
    while(flag!=2*n){
        if(flag%2==0){
            for(int i=0;i<m;i++)      printf(" _");       flag+=1;        printf("\n");
        }
        else{
            for(int j=0;j<m+1;j++)      printf("| ");       flag+=1;        printf("\n");
        }
    }
    for(int i=0;i<m;i++)      printf(" _"); 
}