#include <stdio.h>

double landa(int length){
    double L=0;
    int turn=1;
    for(double i=1;i<=length;i++){
        if(turn%2==0){     L+= (i/(i+1));}      
        else{     L+=((i+1)/i);}
        turn++;  
    }
    L*=2;
    return L;
}

int main(){
    int length;
    scanf("%d",& length);
    if(length<5 || length>50)      printf("-100");
    else    printf("%.6lf",landa(length));
}