// https://quera.org/problemset/226378?tab=description
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n=8;

void forward(int move[2][8],int line,int column){
    if(column+1<=n)   move[line][column+1]=1;
    else{   printf("DEATH");    exit(0);}
}

void upward(int move[2][8],int line,int column){
    if(column+1<=n && line+1<=1)    move[line+1][column+1]=1;
    else{       printf("DEATH");    exit(0);}
}

void downward(int move[2][8],int line,int column){
    if(column+1<=n && line-1>=0)      move[line-1][column+1]=1;
    else{       printf("DEATH");    exit(0);}
}

int main(){
    char list_move[10000];
    gets(list_move);
    int move[2][8],line=1,column=0;
    move[1][0]=1;
    for(int i=0;i<2;i++){       for(int j=0;j<8;j++)     if(i!=1 && j!=0)   move[i][j]=0;}
    for(int i=0;i<n;i++){
        if(list_move[i]=='F'){      forward(move,line,column);      column+=1;}
        else if(list_move[i]=='R'){     upward(move,line,column);      line+=1;     column+=1;}
        else if(list_move[i]=='L'){       downward(move,line,column);     line-=1;    column+=1;}
    }
    for(int i=0;i<2;i++){       for(int j=0;j<n;j++)       printf("%d",move[i][j]);       printf("\n");}
}