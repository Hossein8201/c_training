// https://quera.org/problemset/102258
#include <stdio.h>
#include <math.h>

int digit,difference,flag=0;
int list_numbers[100000];

void print_numbers(){
    if(flag==0){    for(int i=0;i<digit;i++)    printf("%d",list_numbers[i]);}         
    else{   printf(",");    for(int i=0;i<digit;i++)    printf("%d",list_numbers[i]);}    
    flag=1;
}

int numbers(int index){
    if(index==digit)      print_numbers();
    else{
        int m1=list_numbers[index-1]+difference,m2=list_numbers[index-1]-difference;
        if(m2>=0){     list_numbers[index]=m2;     numbers(index+1);}       
        if(m1<=9){     list_numbers[index]=m1;     numbers(index+1);}
    }
}

int main(){
    int index=0;
    scanf("%d %d",&digit,&difference);
    for(int i=1;i<10;i++){      list_numbers[index]=i;       numbers(index+1);}
}