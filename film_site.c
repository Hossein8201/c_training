// https://quera.org/problemset/220672
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ind;
int movie_id;


void ADDMOVIE(char *answer[100000]){
    char title[30],quality[10],number;
    int date,correct=0;
    scanf("%s %d %s",title,&date,quality);
    if(strlen(title)<=20){
        if(date<= 2024 && date>=1888){
            if(strcmp(quality,"720p")==0 || strcmp(quality,"1080p")==0 || strcmp(quality,"4K")==0){

            }
            else    answer[ind++]="invalid quality";
        }
        else    answer[ind++]="invalid date";
    }
    else   answer[ind++]="invalid title";
}  

int main(){
    int n;
    scanf("%d",&n);
    char *answer[100000];
    for(int i=0;i<n;i++){
        char order[30]={};
        scanf("%s",order);
        if(strcmp(order,"ADD-MOVIE")==0)    ADDMOVIE(answer);
        if(strcmp(order,"")==0) ;
        if(strcmp(order,"")==0) ;
        if(strcmp(order,"")==0) ;
        if(strcmp(order,"")==0) ;
        if(strcmp(order,"")==0) ;
        if(strcmp(order,"")==0) ;
        if(strcmp(order,"")==0) ;
        if(strcmp(order,"")==0) ;
        if(strcmp(order,"")==0) ;      
    }
}