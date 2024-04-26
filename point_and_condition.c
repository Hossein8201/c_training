#include <stdio.h>

void selection_sort(float list_gradient[6]){
    for(int i=0;i<5;i++){
        for(int j=i+1;j<6;j++){
            if(list_gradient[i]>list_gradient[j]){
                int tem=list_gradient[i];
                list_gradient[i]=list_gradient[j];
                list_gradient[j]=tem;
            }
        }
    }
}

int main(){
    int index=0,number=0;
    float list_point[4][2],list_gradient[6];
    for(int i=0;i<4;i++)    for(int j=0;j<2;j++)    scanf("%f",&list_point[i][j]);
    for(int i=0;i<4;i++){
        for(int k=i+1;k<4;k++){
            if(list_point[i][0]-list_point[k][0]!=0)   
                list_gradient[index++]=(list_point[i][1]-list_point[k][1])/(list_point[i][0]-list_point[k][0]);
            else
                list_gradient[index++]=99999;
        }
    }
    selection_sort(list_gradient);
    for(int i=0;i<6;i++)    printf("%f ",list_gradient[i]);     printf("\n");

    if(list_gradient[0]==list_gradient[5]){      printf("All in one line");     return 0;}
    for(int i=0;i<3;i++)     if(list_gradient[i]==list_gradient[i+2]){       printf("Three in one line");       return 0;}   
    for(int i=0;i<5;i++)    if(list_gradient[i]==list_gradient[i+1])     number++;    
    if(number==2)   printf("Diamond");     
    else    printf("None");
}