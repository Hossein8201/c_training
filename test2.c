#include <stdio.h>
#include <stdlib.h>

int sort(const void *num1,const void *num2){
    long int n1 = *((int *) num1);     long int n2 = *((int *) num2);
    return (n1 > n2) ? 1 : (n1 == n2) ? 0 : -1;
}

int main(){
    int number,capacity,answer=0;
    long int list_friends[100000];
    scanf("%d %d",&number,&capacity);
    for(int i=0;i<number;i++){      scanf("%ld",&list_friends[i]);}   
    qsort(list_friends,number,sizeof(long int),sort);
    for(int i=0;i<number;i++){
        capacity -= (list_friends[i]+1);
        if(capacity < 0)   break;      
        answer++;
    }
    printf("%d",answer);
}