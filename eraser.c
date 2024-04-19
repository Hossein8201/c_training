#include <stdio.h>
#include <math.h>

int main(){
    double m,n,a,b;
    scanf("%lf %lf %lf %lf",&n,&m,&a,&b);
    if(n >= m){     if(a >= b)      printf("%.0lf",ceil(m/a));     else    printf("%.0lf",ceil(m/b));}
    else{       if(a >= b)      printf("%.0lf",ceil(n/a));     else    printf("%.0lf",ceil(n/b));}
}