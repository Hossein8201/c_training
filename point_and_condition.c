#include <stdio.h>
#include <math.h>

// a function to sort the result of gradients between two points:
void selection_sort(float list[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(list[i]>list[j]){
                float teransport=list[i];
                list[i]=list[j];
                list[j]=teransport;
            }
        }
    }
}

int main(){
    float list_point[4][2],gradient[6],line_length[6];
    float diameter1,diameter2,sum;
    int index=0;
    for(int i=0;i<4;i++)    for(int j=0;j<2;j++)    scanf("%f",&list_point[i][j]);
    
    // to get the gradients and length of lines between two points:
    for(int i=0;i<4;i++){
        for(int k=i+1;k<4;k++){
            // calculate the gradient:
            if(list_point[i][0]-list_point[k][0]!=0)      
               gradient[index]=(list_point[i][1]-list_point[k][1])/(list_point[i][0]-list_point[k][0]);
            else    
                gradient[index]=999999.0;
            // calculate the length:
            line_length[index++]=sqrt(pow(list_point[i][1]-list_point[k][1],2)+pow(list_point[i][0]-list_point[k][0],2));
        }
    }

    // sorted them:
    selection_sort(gradient,6);
    selection_sort(line_length,6);

    // conditions:
    if(gradient[0]==gradient[5]){      printf("All in one line");     return 0;}
    for(int i=0;i<4;i++)     if(gradient[i]==gradient[i+2]){       printf("Three in one line");       return 0;}  
    for(int i=0;i<3;i++)    if(line_length[i]==line_length[i+3]){
        diameter1=line_length[(i+4)%6];
        diameter2=line_length[(i+5)%6];
        sum=sqrt(pow(diameter1/2,2)+pow(diameter2/2,2));
        if(sum==line_length[i]){     printf("Diamond");     return 0;}     
    }    
    printf("None!");
}