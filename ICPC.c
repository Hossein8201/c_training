// https://quera.org/problemset/26109?tab=description
#include <stdio.h>

int main(){
    int p1,s1,p2,s2;
    scanf("%d %d %d %d",&p1,&s1,&s2,&p2);
    if(p1+p2> s1+s2)    printf("Persepolis");
    else if(s1+s2 > p1+p2)     printf("Esteghlal");
    else if(s1+s2==p1+p2){
        if(s1 > p2)      printf("Esteghlal");
        else if(p2 > s1)      printf("Persepolis");
        else    printf("Penalty");
    }
}