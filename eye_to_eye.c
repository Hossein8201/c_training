#include <stdio.h>
#include <string.h>

int main(){
    int radif1[9],radif2[9];
    int m=0;
    for (int i=0;i<8;i++)   scanf("%d",& radif1[i]);      
    for (int i=0;i<8;i++)   scanf("%d",& radif2[i]);
    for (int i=0;i<8;i++)     if (radif1[i] == radif2[i] && radif1[i]==1 )    m +=1;
    printf("%d",m);
}