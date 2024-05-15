// https://quera.org/problemset/297?tab=description
#include <stdio.h>

double exponensial(int x,int number){
    double result=0;
    for(int i=0;i<number;i++){
        double sum_x=1.0,sum_number=1.0;
        for(int j=1;j<=i;j++){
            sum_x*=x;   sum_number*=j;     
        }
        result += sum_x/sum_number;
    }
    return result;
}

int main(){
    int x,number;
    scanf("%d %d",&x,&number);
    printf("%.3lf",exponensial(x,number));
}