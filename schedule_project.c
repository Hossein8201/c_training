#include <stdio.h>
#include <stdlib.h>

int hour, min_hour, max_hour, min_days=-1;

void days(int remain_hour, int hour_in_day, int number_of_days){
    if(remain_hour < 0)     return ;
    else if(remain_hour == 0){   if(min_days > number_of_days || min_days == -1)   printf("%d",number_of_days);  exit(0);}
    for(int i=hour_in_day;i>=min_hour;i--){
        days(remain_hour - i, i, number_of_days+1);
    }
}

int main(){
    scanf("%d",&hour);
    scanf("%d %d",&min_hour,&max_hour);
    for(int i=max_hour;i>=min_hour;i--){
        days(hour-i, i, 1);
    }
    printf("%d",min_days);
    // int number_of_days=0;
    // int remain_hour = hour;
    // for(int i=max_hour;i>=min_hour;i++){
    //     for(int j=i;j>=min_hour;j++){
    //         number_of_days += remain_hour / j;      remain_hour %= j;      
    //         if(remain_hour == 0)    break;
    //     }
    //     if(remain_hour != 0)
    // }
}