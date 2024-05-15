// https://quera.org/problemset/234251?tab=description
#include <stdio.h>

int main(){
    int number,turn,answer_list[200000];
    long long int question;
    scanf("%d %d",&number,&turn);
    for(int i=0;i<number;i++){   
        scanf("%lld",&question);
        if((question-1)%(turn+1) == 0)      answer_list[i]=1;
        else if(((question-1)-((question-1)/(turn+1)))%3 == 1)      answer_list[i]=2;
        else if(((question-1)-((question-1)/(turn+1)))%3 == 2)      answer_list[i]=3;
        else    answer_list[i]=4;
    }
    for(int i=0;i<number;i++){
        if(answer_list[i]==1)       printf("Peygir\n");
        else if(answer_list[i]==2)      printf("Tannaz\n");
        else if(answer_list[i]==3)      printf("Jeddy\n");
        else    printf("Morshed\n");
    }
}