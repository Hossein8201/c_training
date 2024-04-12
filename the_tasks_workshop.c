#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    // another way:
    // int a,b;
    // char character;
    // scanf("%c %d",&character,&a);
    // b = (int) character;
    // printf("%c %c",b+a,a+b+32);

    // task two
    // srand(time(0));
    // for(int i=0;i<5;i++){
    //     printf("%d\n",rand());
    // }
    
    // task three
    // int secends,days,hours,minutes;
    // scanf("%d",&secends);
    // days = (int) secends/86400;
    // hours = (int) (secends%86400)/3600;
    // minutes = (int) (secends%3600)/60;
    // secends = secends%60;
    // printf("days = %d, hours = %d, minutes = %d, secends = %d",days,hours,minutes,secends);
    
    // task four
    float num1, num2;                 // input values
    char op;                        // operator
    float result;                     // output

    printf("Choose operation to perform (+, -, *, /, %, sin, cos, tan): ");
    scanf("%c", &op);

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // do the operation
    if(op == '+') {
        // the part that calculates the sum of two numbers
        result = num1 + num2;
    }
    else if(op == '-') {
        // the part that calculates the difference of two numbers
        result = num1 - num2;
    }
    else if(op == '*') {
        // the part that calculates the product of two numbers
        result = num1 * num2;
    }
    else if(op == '/') {
        // the part that calculates the division of two numbers
        // if denominator equals to zero exit the program
        if(num2 == 0) {
            printf("invalid input! divide by zero");
            return -1;
        }
        else {
            result = num1 / num2;
        }
    }
    else if(op == '%') {
        // the part that calculates the remainder of a number over another number
        if ((num1 - (int)num1 == 0) && (num2 - (int)num2) == 0) {
            result = (int)num1 % (int)num2;
        }
        else {
            printf("incorrect input");
            return 0;
        }
    }
    else if(op == 's') {
        // the part that calculates sine of an angle
        result = sin(num1 / num2);
    }
    else if(op == 'c') {
        //the part that calculates the cosine of an angle
        result = cos(num1 / num2);
    }
    else if(op == 't') {
        // the part that calculates the tangent of an angle
        result = tan(num1 / num2);
    }

    // print result
    if(op == 's') {
        printf("result : sin(%f/%f) = %f", num1, num2, result);
    }
    else if(op == 'c') {
        printf("result : cos(%f/%f) = %f", num1, num2, result);
    }
    else if(op == 't') {
        printf("result : tan(%f/%f) = %f", num1, num2, result);
    }
    else if(op == '%') {
        printf("result : %f %% %f = %f", num1, num2, result);
    }
    else {
        printf("result : %f %c %f = %f", num1, op, num2, result);
    }

    return 0;
    
}

