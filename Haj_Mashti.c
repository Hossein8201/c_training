#include <stdio.h>

int main(){
    char travel[4];
    scanf("%s",travel);
    if (travel[0] =='Y') printf("Haji");
    else if (travel[1] == 'Y') printf("Karbalaee");
    else if (travel[2] == 'Y') printf("Mashti");
    else printf("Agha");
}