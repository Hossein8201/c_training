// https://quera.org/problemset/232026
#include <stdio.h>

int list_question[100000];

int main(){
    int turn;
    scanf("%d",&turn);
    for(int i=0;i<turn;i++)     scanf("%d",&list_question[i]);
    for(int i=0;i<turn;i++){
        if(list_question[i]==1)     printf("2\n");
        else{
            switch((list_question[i]-1)%4){
                case 0:     printf("-2\n");     break;
                case 1:     printf("1\n");      break;
                case 2:     printf("-3\n");     break;
                case 3:     printf("2\n");      break;
            }
        }
    }     
}