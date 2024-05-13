#include <stdio.h>

long long int rank_list[100000000];

int main(){
    long long int first_people,people;
    long long int rank,rank_start=0,rank_estimate;
    scanf("%lld %lld",&first_people,&people);
    rank_estimate = people - first_people;
    for(long long int i=0;i<first_people;i++){
        scanf("%lld",&rank);    
        if(rank>rank_start && rank<=rank_estimate){     rank_estimate++;    rank_start=rank;}     
    }
    printf("%lld",rank_estimate);
}