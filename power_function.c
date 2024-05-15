// 
#include <stdio.h>

double mypow(double base,unsigned exp){
    if(exp==1)  return base;
    else if(exp==2)     return base*base;
    else    return base*base*mypow(base,exp-2);
}

int main(){
    unsigned exp;
    double base,answer=1.0;
    scanf("%lf %u",&base,&exp);
    //printf("%.3lf",mypow(base,exp));
    for(int i=0;i<exp;i++)  answer*=base;
    printf("%.3lf",answer);
}