// https://quera.org/problemset/232025
#include <stdio.h>

int main(){
    int round;
    char point_winner,match_result[10000];
    scanf("%d",&round);
    for(int i=0;i<round;i++){
        int set_point,Quera_point=0,Codecup_point=0;      scanf("%d ",&set_point);
        for(int j=0;j<set_point;j++){      scanf("%c",&point_winner);      
            if(point_winner=='Q')    Quera_point+=1;     else    Codecup_point+=1;}
        if(Quera_point>Codecup_point)     match_result[i]='Q';      else    match_result[i]='C';
    }
    for(int i=0;i<round;i++){      if(match_result[i]=='Q')     printf("Quera\n");      else      printf("CodeCup\n");}
}