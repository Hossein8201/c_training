#include <stdio.h>
#include <math.h>
#define DIFF(a,b,c) (((a)+(b)>(c) ? (1) : (0)))

int main(){
    int sum,a,b,c;
    scanf("%d",&sum);
    if(sum%3==2){   a=floor(sum/3);     b=ceil(sum/3);     c=ceil(sum/3);}
    else{    a=floor(sum/3);     b=floor(sum/3);     c=ceil(sum/3);}
    

}