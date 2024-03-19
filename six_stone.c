#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    scanf("%s",name);
    if (strcmp(name,"space")==0) printf("blue");
    else if (strcmp(name,"mind")==0) printf("yellow");
    else if (strcmp(name,"reality")==0) printf("red");
    else if (strcmp(name,"power")==0) printf("purple");
    else if (strcmp(name,"time")==0) printf("green");
    else if (strcmp(name,"soul")==0) printf("orange");
}