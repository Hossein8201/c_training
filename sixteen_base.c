// https://quera.org/problemset/6374?tab=description
#include <stdio.h>
#include <string.h>

char primite_string[100000],finished_string[100000];

void print_list(int index,int carry){
    if(carry==1){   printf("1");    for(int i=0;i<index;i++)   printf("%c",finished_string[i]);}
    else    for(int i=0;i<index;i++)    printf("%c",finished_string[i]);   
}

void sixteen_base(int index,int carry){
    for(int i=index-1;i>=0;i--){
        if(carry==1){
            finished_string[i]= (char) ((int) primite_string[i] +1);
            if(finished_string[i]=='G'){    finished_string[i]='0';     carry=1;}
            else    carry=0;
        }
        else    finished_string[i]=primite_string[i];    
    }
    print_list(index,carry);
}

int main(){
    int index,carry=1;
    scanf("%s",primite_string);
    index = strlen(primite_string);
    sixteen_base(index,carry);
}