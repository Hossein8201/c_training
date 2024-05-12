#include <stdio.h>

int main(){
    int list_stones[7],stone;
    for(int i=0;i<7;i++)    scanf("%d",&list_stones[i]);
    scanf("%d",&stone);
    for(int i=0;i<7;i++){
        if(i==0 && list_stones[i]==stone){   printf("6");   return 1;}
        else if(list_stones[i]==stone){   printf("%d",7-i);     return 1;}
    }
}