// https://quera.org/problemset/35254?tab=description
#include <stdio.h>

int pow2(int number){
    int answer=0,remain;
    while(number != 0){
        remain = number %2;     answer += remain;     number = (number-remain)/2;
    }
    return answer;
}

int main(){
    int length,min,max,begin,end,answer=0;
    char street[1000000];
    scanf("%d ",&length);    gets(street);      scanf("%d %d",&max,&min);
    begin = (max < min) ? max : min ;    end = (max > min) ? max : min ;
    length = begin;
    while(length < end-1){
        if(street[length] == 'H' && street[length-1] == 'P'){
            int number=0,i=length;
            while(street[i] == 'H'){   number++;   i++;}
            answer += pow2(number);     length = i+1;
        }
        else    length++;
    }
    printf("%d",answer);
}