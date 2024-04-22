// https://quera.org/problemset/228672?tab=description
#include <stdio.h>
#include <stdlib.h>

int n;
int coin_list[2][2000]={0};
char weight_coin[2000][2000];

void coins(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char weight_coin_element=weight_coin[i][j];
            if(weight_coin_element=='='){
                if(coin_list[0][i]==0)     coin_list[0][i]=coin_list[1][j];
                else if(coin_list[1][j]==0)      coin_list[1][j]=coin_list[0][i];
                else{   if(coin_list[0][i]!=coin_list[1][j]){     printf("invalid");      exit(0);}}
            }
            else if(weight_coin_element=='<'){
                if(coin_list[0][i]==1 || coin_list[1][j]==-1){     printf("invalid");      exit(0);}    
                else{      coin_list[0][i]=-1;      coin_list[1][j]=1;}
            }
            else if(weight_coin_element=='>'){
                if(coin_list[0][i]==-1 || coin_list[1][j]==1){     printf("invalid");      exit(0);}
                else{      coin_list[0][i]=1;       coin_list[1][j]=-1;}
            }
        }
    }
    // second time:
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            char weight_coin_element=weight_coin[i][j];
            if(weight_coin_element=='='){
                if(coin_list[0][i]==0)     coin_list[0][i]=coin_list[1][j];
                else if(coin_list[1][j]==0)      coin_list[1][j]=coin_list[0][i];
                else{   if(coin_list[0][i]!=coin_list[1][j]){     printf("invalid");      exit(0);}}
            }
            else if(weight_coin_element=='<'){
                if(coin_list[0][i]==1 || coin_list[1][j]==-1){     printf("invalid");      exit(0);}    
                else{      coin_list[0][i]=-1;      coin_list[1][j]=1;}
            }
            else if(weight_coin_element=='>'){
                if(coin_list[0][i]==-1 || coin_list[1][j]==1){     printf("invalid");      exit(0);}
                else{      coin_list[0][i]=1;       coin_list[1][j]=-1;}
            }
        }
    }
}

int main(){
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        scanf("%s",weight_coin[i]);
    }
    coins();
    for(int i=0;i<2;i++)     for(int j=0;j<n;j++)     if(coin_list[i][j]==0){    printf("not unique");       return 0;}
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            if(coin_list[i][j]==-1)      coin_list[i][j]=0;  
            printf("%d",coin_list[i][j]);
        }  
        printf("\n");
    }
}