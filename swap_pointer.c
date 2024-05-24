#include <stdio.h>

void swap(int *a,int *b){
    int tem=*a;     *a = *b;    *b = tem;
}

int main()
{
    int a,b;
    printf("Enter a=");     scanf("%d",&a);
    printf("Enter b=");     scanf("%d",&b);
    swap(&a,&b);
    printf("your result after:\na=%d\tb=%d",a,b);
}

