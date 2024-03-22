#include <stdio.h>

int main(){
    int street,n,m,in=0,out=0;
    char cyrcle[1000000];
    scanf("%d %d",& n,& m);
    for (int i=0;i<n;i++){
        scanf("%d ",& street);
        if (street== 1)   out =1;
        else if (street== 0)   in=1;
    }
    scanf("%s",cyrcle);
    if (in == out && out ==1)  printf("YES");
    else  printf("NO");
}
