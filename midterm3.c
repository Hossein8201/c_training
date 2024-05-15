#include <stdio.h>
#include <stdlib.h>

int *list_number = NULL;
int ind=0;

void input(){
    int number,array=5;
    while(1){
        scanf("%d",&number);     
        if(number==-1)     return ;     
        else{
            if(list_number == NULL)     list_number = (int *) malloc(array*sizeof(int));
            else if(ind==array){  array*=2;   list_number = (int *) realloc(list_number,array*sizeof(int));}
            list_number[ind++] = number;        
        }
    }
}

int sort(const void *number1,const void *number2){
    int num1 = *((int *) number1);
    int num2 = *((int *) number2);
    return (num1>num2) ? 1 : (num1==num2) ? 0 : -1;
}

int main(){
    input();
    qsort(list_number,ind,sizeof(int),sort);
    for(int i=0;i<ind;i++)   printf("%d ",list_number[i]);
    free(list_number);
    return 0;
}