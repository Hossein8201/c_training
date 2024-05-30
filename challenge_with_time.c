// https://quera.org/problemset/236459?tab=description
#include <stdio.h>
#include <math.h>

int main(){
    int step,number,list_building[10000];
    scanf("%d\n%d",&step,&number);
    for(int i=0;i<number;i++)   scanf("%d",&list_building[i]);
    int answer=0;
    answer += ceil((list_building[0]*1.0)/step);
    answer += ceil((list_building[number-1]*1.0)/step);
    for(int i=1;i<number;i++)
        answer += ceil((fabs(list_building[i]-list_building[i-1])*1.0)/step);
    printf("%d",answer+number);
}