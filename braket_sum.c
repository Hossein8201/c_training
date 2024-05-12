// https://quera.org/problemset/221454
#include <stdio.h>
#include <math.h>

int main(){
    int turn;
    long long int list[1000];
    double list_question[1000][2];
    scanf("%d",&turn);
    for(int i=0;i<turn;i++){    scanf("%lf",&list_question[i][0]);     scanf("%lf",&list_question[i][1]);
        long long int number=list_question[i][0];     double begin=list_question[i][1];
        long long int sum = (long long int) floor(begin)*number;
        begin -= ceil(begin);       begin *= -1.0;
        double j = ceil(number*begin);    long long int amount = (long long int) number-j;   if(amount >=0)  sum+= amount;
        list[i] = sum;
    }
    for(int i=0;i<turn;i++)    printf("%lld\n",list[i]);
}