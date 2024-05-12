#include <stdio.h>

int fibonacci_list[100000];

int fibonacci(int number){
    if(number==1 || number==2)  fibonacci_list[number]=1;
    else{    if(fibonacci_list[number]==0)   fibonacci_list[number] = fibonacci(number-1) + fibonacci(number-2);
    printf("%d + %d = %d\n",fibonacci_list[number-1],fibonacci_list[number-2],fibonacci_list[number]);}
    return fibonacci_list[number];
}

int main()
{
    int number;
    scanf("%d",&number);
    fibonacci(number);
    printf("%d",fibonacci_list[number]);
}

