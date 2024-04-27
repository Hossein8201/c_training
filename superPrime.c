#include <stdio.h>
#include <math.h>

int primary(int number){
    for(int i=2;i<sqrt(number);i++){
        if(number%i==0)     return 0;
        else ;
    }
    return 1;
}

int main() {
    int n,n_rebuld=0,i=0;
    scanf("%d",&n);
    while(n!=0){
        int m=n%10;
	n=(n-m)/10;
        n_rebuld+=m*pow(10,i++);
        if(primary(n_rebuld)==1)   ;
        else{   printf("this number isn't a super prime number");   return 0;}
    }
    printf("this number is a super prime number");
}
