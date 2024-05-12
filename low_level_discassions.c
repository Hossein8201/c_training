#include <stdio.h>
#include <math.h>


int main(){
    int list_answer[1000000000];
    long long int list_question[10000000];
    long long int questions,number,max;
    scanf("%lld %lld",& questions, & number);
    for(long int i=0;i<questions;i++){    scanf("%lld",&list_question[i]);  max=fmax(list_question[i-1],list_question[i]);}
    for(long long int j=0;j<max;j++){
        if(j==0 || (j)%(number+1)==0){     list_answer[j]=1;     }
        else if(j==1 || list_answer[j-1]==4 || (list_answer[j-1]==1 && list_answer[j-2]==4)){     list_answer[j]=2;}
        else if(j==2 || list_answer[j-1]==2 || (list_answer[j-1]==1 && list_answer[j-2]==2)){     list_answer[j]=3;}
        else{    list_answer[j]=4;}
    }
    for(long long int i=0;i<questions;i++){
        if(list_answer[list_question[i]-1]==1)   printf("Peygir");
        else if(list_answer[list_question[i]-1]==2)   printf("Tannaz");
        else if(list_answer[list_question[i]-1]==3)   printf("Jeddy");
        else    printf("Morshed");
        printf("\n");
    }
}