#include <stdio.h>

int main(){
    int x,x1,x2,a1=4,a2=4,y,y1,y2,b1=4,b2=4,z,z1,z2,c1=4,c2=4;
    scanf("%d %d %d",&x1,&y1,&z1);
    a1-=1;  b1-=1;  c1-=1;
    for (int i=0;i<6;i++){
        scanf("%d %d %d",&x,&y,&z);
        if (x==x1)  a1-=1;
        else{   a2-=1;  x2=x;}
        if (y==y1)  b1-=1;
        else{   b2-=1;  y2=y;}
        if (z==z1)  c1-=1;
        else{   c2-=1;  z2=z;}
    }
    if (a1==1) printf("%d ",x1);
    else    printf("%d ",x2);
    if (b1==1)  printf("%d ",y1);
    else    printf("%d ",y2);
    if (c1==1)  printf("%d",z1);
    else    printf("%d",z2);
}