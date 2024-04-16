#include <stdio.h>
#include <math.h>

int main(){
    int n,m,m1=1,bet=1;
    scanf("%d",& n);
    int turn[2]={pow(3,n-1),0};
    char wall[(int) pow(3,n)][n];
    for(int i=0;i<n;i++){
        turn[0]=pow(3,n-1-i);
        m=turn[0];
        for(int j=0;j<pow(3,n);j++){
            if(turn[1]==0) wall[j][i]='R';
            else if(turn[1]==1){    if(wall[j][i-1]=='W' && i-1>=0)   wall[j][i]='\0';     else    wall[j][i]='B';}
            else{   if(wall[j][i-1]=='B' && i-1>=0)    wall[j][i]='\0';    else    wall[j][i]='W';}
            m-=m1;
            if(m==0){     m=turn[0];      turn[1]=(turn[1]+1)%3;}
        }
    }
    for(int i=0;i<pow(3,n);i++){
        for(int j=0;j<n;j++){   if(wall[i][j]=='\0')     bet=0;}
        if(bet){     for(int j=0;j<n;j++)     printf("%c",wall[i][j]);     printf("\n");}
        bet=1;
    }
}