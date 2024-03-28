#include <stdio.h>
#include <string.h>

int main(){
    int m,n,t,u,d,r,l,sum=0;
    long int string[100][100];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){     for(int j=0;j<m;j++)   scanf("%d",&string[i][j]);}   
    for(int i=1;i<n-1;i++){     for(int j=1;j<m-1;j++){
        t = string[i][j];   u=string[i-1][j];   d=string[i+1][j];   r=string[i][j+1];   l=string[i][j-1];
        if(t>r && t>l && t<u && t<d)    sum+=1;
        else if(t>u && t>d && t<r && t<l)   sum+=1;
    }}
    printf("%d",sum);
}