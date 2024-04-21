// https://quera.org/problemset/66859
#include <stdio.h>

int main(){
    long int n,base,dig=-1;
    char answer[1000],digit[17]="0123456789ABCDEFG";
    scanf("%ld %ld",&n,&base);
    while(n!=0){
        dig++;
        int m=n%base;
        answer[dig]=digit[m];
        n=(n-m)/base;
    }
    for(int i=dig;i>=0;i--)     printf("%c",answer[i]);
}