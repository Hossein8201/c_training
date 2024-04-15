#include <stdio.h>

int main(){
    int destination;
    scanf("%d",& destination);
    switch(destination%4){
        case 0:     printf("%d %d",destination*(-1)/4,destination/4);   break;
        case 1:     destination-=1;    printf("%d %d",-1*destination/4,-1*destination/4);  break;
        case 2:     destination-=2;    printf("%d %d",destination/4+1,-1*destination/4);   break;
        case 3:     destination-=3;    printf("%d %d",destination/4+1,destination/4+1);    break;
    }
}