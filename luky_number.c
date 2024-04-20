#include <stdio.h>
int m;
int sum=0;

void number_members(int n){
    while(n!=0){
        m = n%10;
        if(m==4 || m==7)    sum+=1;
        n = (n-m)/10;
    }
}

void sum_status(void){
    int rule=1;
    while(sum!=0){
        m = sum%10;
        if(m!=4 && m!=7){    rule=0;    break;}
        sum=(sum-m)/10;
    }
    if(rule)    printf("this is a luky number!");
    else    printf("this isn't a luky number!");
}

int main(void)
{
    int n;
    scanf("%d",&n);
    number_members(n);
    sum_status();
}
