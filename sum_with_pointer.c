#include <stdio.h>
#include <stdlib.h>

void sum_with_pointer(int *number_one,int *number_two,int *result){
    *result = *number_one + *number_two;
}

int main(){
    int number_one,number_two,result;
    scanf("%d %d",&number_one,&number_two);
    sum_with_pointer(&number_one, &number_two, &result);
    printf("%d",result);
}