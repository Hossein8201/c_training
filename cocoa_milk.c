// https://quera.org/problemset/6395
#include <stdio.h>

int main(){
    int member_number;
    long long int milk_amount,cap_status = 0,need_milk = 0;
    scanf("%d",&member_number);
    for(int i=0;i<member_number;i++){    scanf("%lld",&milk_amount);
        if(milk_amount > 0){
            if(cap_status < milk_amount){    need_milk += (milk_amount - cap_status);       cap_status = 0;}
            else    cap_status -= milk_amount;
        }
        else    cap_status += (-1*milk_amount);
    }
    printf("%lld",need_milk);
}