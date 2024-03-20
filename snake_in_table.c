#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (i%2==0) printf("%d ",i*m+(j+1));
            else printf("%d ",(i+1)*m-j);
        }
        printf("\n");
    }
}