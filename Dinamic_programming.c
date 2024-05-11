#include <stdio.h>

int fibonacci_list[1000000];

int fibonacci(int number){
    fibonacci_list[0]=1;
    fibonacci_list[1]=1;
    for(int i=2;i<number;i++)
        fibonacci_list[i] = fibonacci_list[i-1] + fibonacci_list[i-2];
    return fibonacci_list[number-1];
}

int main(){
    int number;
    scanf("%d",&number);
    printf("%d",fibonacci(number));
}
