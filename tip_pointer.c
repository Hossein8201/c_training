#include <stdio.h>
#include <stdlib.h>

void f1(char **);
void f2(int *);

int main(){
    int a[5]={1,2,3,4,5};
    printf("%lu\n", sizeof(a));  // answer = 20 <--- 5*4
    int *pointer = (int *) (&a +1);  //  this return the hole of a address!
    printf("%d %d\n\n", *(a +1), *(pointer-1)); // answer = 2 , 5!
    // resume the answer:
    char *string[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
    f1(string);
    // how to give that to a function:
    int number = 10;    f2(&number);
    // the crucial defference in pointers:
    int string_number[][3] = {1,2,3,4,5,6};
    int (*pointer_string_number)[3] = string_number;  // the list that point to three firt member of string.
    printf("%d %d\n",(*pointer_string_number)[1],(*pointer_string_number)[2]);
    ++pointer_string_number;
    printf("%d %d\n\n",(*pointer_string_number)[1],(*pointer_string_number)[2]);
}

void f1(char **string){
    char *t = (string += sizeof(int))[-1];  // the fourth member of string is "gh"
    printf("%s\n\n",t); // this string in first point to a string but his begin address was changed.
}

void f2(int *pointer_number){
    printf("your number is = %d\n\n",*pointer_number);  // print the amount of number
}
