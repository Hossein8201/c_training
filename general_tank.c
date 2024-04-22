// https://quera.org/problemset/182270?tab=description
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;
int tank_position_first[100000];
int tank_position_second[100000];
int tank_transport_first[100000]={0};
int tank_transport_second[100000]={0};

int make_first(int tank_position_first[]){
    int sum_transport=0;
    for(int i=1;i<n;i++){
        tank_transport_first[i]=(tank_position_first[i-1]-3)-tank_position_first[i];
        tank_position_first[i]=tank_position_first[i-1]-3;
        sum_transport+=fabs(tank_transport_first[i]);
    }
    return sum_transport;
}

int make_second(int tank_position_second[]){
    int sum_transport=0;
    for(int i=1;i<n;i++){
        tank_transport_second[i]=(tank_position_second[i-1]+3)-tank_position_second[i];
        tank_position_second[i]=tank_position_second[i-1]+3;
        sum_transport+=fabs(tank_transport_second[i]);
    }
    return sum_transport;
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){   scanf("%d",&tank_position_first[i]);      tank_position_second[i]=tank_position_first[i];}       
    int first_transport=make_first(tank_position_first);
    int second_transport=make_second(tank_position_second);
    if(first_transport<second_transport) for(int i=0;i<n;i++){
            if(tank_transport_first[i]>0) printf("+"); printf("%d\n",tank_transport_first[i]);
        }
    else if(first_transport>=second_transport) for(int i=0;i<n;i++){
            if(tank_transport_second[i]>0) printf("+"); printf("%d\n",tank_transport_second[i]);  
        } 
}