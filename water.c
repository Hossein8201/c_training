#include <stdio.h>

int list_building[10000000];

int check_building(int num1,int num2){
    int water = 0,max = (list_building[num1] <= list_building[num2]) ? list_building[num1] : list_building[num2] ;
    for(int i=num1+1;i<num2;i++)    if(list_building[i] < max)     water += (max-list_building[i]);
    return water;
}

int main(){
    int number,final_water = 0;
    scanf("%d",&number);
    for(int i=0;i<number;i++)   scanf("%d",&list_building[i]);
    for(int i=0;i<number-2;i++){
        for(int j=i+2;j<number;j++){
            int water_example = check_building(i,j);
            final_water = (final_water < water_example) ? water_example : final_water ;
        }
    }
    printf("%d",final_water);
}