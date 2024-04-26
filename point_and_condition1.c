#include <stdio.h>
#include <math.h>

void selection_sort(float list_gradient[6],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(list_gradient[i]>list_gradient[j]){
                float tem=list_gradient[i];
                list_gradient[i]=list_gradient[j];
                list_gradient[j]=tem;
            }
        }
    }
}

int main(){
    float list_point[4][2],gradient[4],line[4];
    int index=0,number=0;
    for(int i=0;i<4;i++)    for(int j=0;j<2;j++)    scanf("%f",&list_point[i][j]);
    // to get the length:
    for(int i=0;i<4;i++){
        int j=i+1;
        if(j==4)    j=0; 
        line[i]=sqrt(pow(list_point[i][1]-list_point[j][1],2)+pow(list_point[i][0]-list_point[j][0],2));
    }
    // to get the gradients:
    for(int i=0;i<4;i++){
        for(int k=i+1;k<4;k++){
            if(list_point[i][0]-list_point[k][0]!=0)      
               gradient[index]=(list_point[i][1]-list_point[k][1])/(list_point[i][0]-list_point[k][0]);
            else    gradient[index]=9999;
            line[index++]=sqrt(pow(list_point[i][1]-list_point[k][1],2)+pow(list_point[i][0]-list_point[k][0],2));
        }
    }
    // sorted them:
    selection_sort(gradient,6);
    selection_sort(line,6);
    // conditions:
    if(gradient[0]==gradient[5]){      printf("All in one line");     return 0;}
    for(int i=0;i<3;i++)     if(gradient[i]==gradient[i+2]){       printf("Three in one line");       return 0;}  
    for(int i=0;i<5;i++)    if(gradient[i]==gradient[i+1])     number++;    
    if(number==2){
        for(int j=0;j<3;j++)    if(line[j]==line[j+3])  printf("Diamond"); 
    }     
    else    printf("None");
}