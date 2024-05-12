#include <stdio.h>
#include <math.h>

int fibonacci_recursive(int number){ // the function that calculate recursively to find the fibonacci number: 
    if(number==1 || number==2){      printf("fibonacci(%d) = 1\n",number);   return 1;}
    else{ // this calculate from up to down:
        int amount1 = fibonacci_recursive(number-1);       int amount2 = fibonacci_recursive(number-2);    
        int amount = amount1 + amount2;
        printf("fibonacci(%d) = %d + %d = %d\n",number,amount1,amount2,amount);   // this print the steps of work of recursive function:
        return amount;
    }
}

int fibonacci_nonrecursive(int number){ // the function that calculate nonrecursively to find the fibonacci number:
    int first_number=1,second_number=1,third_number=1;
    for(int i=2;i<number;i++){ // this calculate from down to up (the opposite of recursive function):
        third_number=first_number+second_number;
        first_number=second_number;
        second_number=third_number;
    }
    return third_number;
}

int fibonacci_formula(int number){ // this function calculate the amount of fibonacci via its formula:
    return (pow((1+sqrt(5))/2,number)-pow((1-sqrt(5))/2,number))/sqrt(5);
}

int main(){
    int number;
    scanf("%d",&number); // print the finally answer via call these functions:
    printf("the steps of work recursive fibonacci:\n");
    printf("the result for fibonacci recursive is = %d\n",fibonacci_recursive(number));
    printf("the result for fibonacci nonrecursive is = %d\n",fibonacci_nonrecursive(number));
    printf("the result for formula fibonacci is = %d\n",fibonacci_formula(number));
}
