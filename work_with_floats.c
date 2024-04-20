// https://quera.org/problemset/292
#include <stdio.h>

int main(){
    long int N;
    scanf("%ld",&N);
    float Min,Max,Average,Number;
    scanf("%f",&Number);      Min=Number;      Max=Number;       Average+=Number;
    for(int i=0;i<N-1;i++){
        scanf("%f",&Number);
        if(Number>Max)      Max=Number;
        if(Number<Min)      Min=Number;
        Average+=Number;
    }
    Average/=N;
    printf("Max: %.3f\nMin: %.3f\nAvg: %.3f",Max,Min,Average);
}