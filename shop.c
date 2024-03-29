#include <stdio.h>

int main(){
    int n,m=0;
    scanf("%d",&n);
    for(int i=0;i<4;i++){
        printf("########.......########\n");
        if(n>=2){   printf("#ghorfe%d.......ghorfe%d#\n",m+1,m+2);    m+=2;   n-=2;}
        else if(n==1){      printf("#ghorfe%d..............#\n",m+1);     m+=1;    n-=1;}
        else{   printf("#.....................#\n");}
    }
    printf("#######################");
}