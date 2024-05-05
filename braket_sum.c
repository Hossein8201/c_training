// https://quera.org/problemset/221454
#include <stdio.h>
#include <math.h>

int main(){
    int turn;
    long int list[1000];
    double number,begin,list_question[1000][2];
    scanf("%d",&turn);
    for(int i=0;i<turn;i++){    scanf("%lf",&list_question[i][0]);     scanf("%lf",&list_question[i][1]);}
    for(int i=0;i<turn;i++){
        number=list_question[i][0];     begin=list_question[i][1];
        double sum = floor(begin)*number;
        begin -= ceil(begin);       begin *= -1;
        double j = (number*begin);      double j_=j;
        double k=0;
        for(int l=1;l*j<=number-1;l++){     if(j_<=l*j)   k++;    j_++;   sum+=k;}    
        //printf("%lf\n",sum);
        list[i] = (long int) sum;
    }
    for(int i=0;i<turn;i++)    printf("%ld\n",list[i]);
}