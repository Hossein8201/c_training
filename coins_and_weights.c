// https://quera.org/problemset/228672?tab=description
#include <stdio.h>

int main(){
    long int n,invalid=1;
    scanf("%ld ",&n);
    long int coin_list[2][n];
    for(int i=0;i<2;i++){     for(long int j=0;j<n;j++)      coin_list[i][j]=-1;}
    char weight_coin;
    for(long int i=0;i<n;i++){
        for(long int j=0;j<n;j++){
            scanf("%c",&weight_coin);
            if(weight_coin=='='){
                if(coin_list[0][i]==-1)     coin_list[0][i]=coin_list[1][j];
                else if(coin_list[1][j]==-1)      coin_list[1][j]=coin_list[0][i];
                else{   if(coin_list[0][i]!=coin_list[1][j])    invalid=0;}
            }
            else if(weight_coin=='<'){
                if(coin_list[0][i]==1 || coin_list[1][j]==0)    invalid=0;    
                else{      coin_list[0][i]=0;      coin_list[1][j]=1;}
            }
            else if(weight_coin=='>'){
                if(coin_list[0][i]==0 || coin_list[1][j]==1)    invalid=0;
                else{      coin_list[0][i]=1;       coin_list[1][j]=0;}
            }
        }
        if(i!=n-1)      scanf(" ");
    }
    if(invalid==0){     printf("invalid");      return 0;}
    for(int i=0;i<2;i++){     for(int j=0;j<n;j++){     if(coin_list[i][j]==-1){    printf("not unique");       return 0;}}}
    for(int i=0;i<2;i++){     for(int j=0;j<n;j++)      printf("%d",coin_list[i][j]);       printf("\n");}
}