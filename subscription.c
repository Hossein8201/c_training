#include <stdio.h>

int main(){
    int list[3][2],min,max;
    for(int i=0;i<3;i++)    for(int j=0;j<2;j++)    scanf("%d",&list[i][j]);
    min=list[0][0];     max=list[0][1];
    // change the limit:
    for(int i=1;i<3;i++)    if(min<list[i][0])     min=list[i][0];
    for(int i=0;i<3;i++)    if(max>list[i][1])     max=list[i][1];
    // conditions:
    if(min!=max)    printf("%d %d",min,max);
    else    printf("this aren't subscription");
}