#include <stdio.h>
#include <string.h>

int beautiful(int number){
    char list_number[1000000];
    int length=0;
    if(number%10==number)   return 1;
    else{   sprintf(list_number,"%d",number);   length=strlen(list_number); 
        for(int i=0;i<=length/2 -1;i++){
            if(list_number[i] != list_number[length-1-i])   return 0;
        }
        return 1;
    }

}

int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        if(beautiful(i))    printf("%d\n",i);
    }
    return 0;
}