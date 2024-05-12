
#include <stdio.h>

int number;
long long int list[1000000][2];

void sorted_list(){
    for(int i=0;i<number-1;i++)     for(int j=1;j<number;j++){
        if(list[i][0]< list[j][0]){
            long long int tem[2];   tem[0]=list[j][0];  tem[1]=list[j][1];   
            list[j][0]=list[i][0];  list[j][1]=list[i][1];
            list[i][0]=tem[0];   list[i][1]=tem[1];
        }
        else if(list[i][0]== list[j][0])    if(list[i][1]>list[j][1]){
            long long int tem[2];   tem[0]=list[j][0];  tem[1]=list[j][1];   
            list[j][0]=list[i][0];  list[j][1]=list[i][1];
            list[i][0]=tem[0];   list[i][1]=tem[1];
        }
    }  
}
int main(){
    long long int volume_stomach;
    float happy=0;
    scanf("%d %lld",&number,&volume_stomach);
    for(int i=0;i<number;i++)   scanf("%lld %lld",&list[i][0],&list[i][1]);
    sorted_list();
    for(int i=0;i<number;i++){
        if(volume_stomach==0)   break;  
        else if(volume_stomach >= list[i][1]){   volume_stomach-=list[i][1];     happy+=1.0*list[i][0];}
        else{   happy+=((1.0*volume_stomach)/list[i][1])*list[i][0];    volume_stomach=0;}
    }
    printf("%.1f",happy);
}