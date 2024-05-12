// https://quera.org/problemset/602?tab=description
#include <stdio.h>
#include <math.h>

int function1(float x,float y){
    float yr = x - floor(x);
    if(fabs(y-yr) <= 0.2)   return 1;
    return 0;
}

int function2(float x,float y){
    float yr = x*x + x;
    if(fabs(y-yr) <= 0.2)   return 1;
    return 0;
}

int function3(float x,float y){
    float yr = fabs(1 - x*x*x) + x*x*x;
    if(fabs(y-yr) <= 0.2)  return 1;
    return 0;
}

int main(){
    int number,list_answer[10000][3]={0},flag=0;
    scanf("%d",&number);
    for(int i=0;i<number;i++){   
        char x[100],y[100];      scanf("%s %s",&x,&y);
        for(int )
        if(){
            if(function1(x,y))      list_answer[i][0] = 1;      
            if(function2(x,y))      list_answer[i][1] = 2;
            if(function3(x,y))      list_answer[i][2] = 3;
        }
        else    flag=1;       
    }
    if(flag){   printf("No ones");   return 1;}
    for(int i=0;i<3;i++){
        int answer=0;
        for(int j=0;j<number;j++)    if(list_answer[j][i] == i+1){    answer++;}
        if(answer==number){      printf("%d",i+1);    return 1;}
    }
    printf("No ones");
}