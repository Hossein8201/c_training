#include <stdio.h>
#include <string.h>

char string[1000000];
int list_amount[1000000]={0};
char list_character[1000000];
int ind;
int length;
int max=-1;

void string_list(){
    for(int i=0;i<ind;i++){
        int flag=1;
        for(int j=0;j<length;j++){
            if(list_character[j]==string[i]){    list_amount[j]++;  flag=0;
                if(list_amount[j]>list_amount[max])  max=j;   break;}
        }
        if(flag){    list_character[length] = string[i];    list_amount[length]++;
            if(list_amount[length]>list_amount[max] || max==-1)     max = length;   length++;}
    }
    printf("the character \'%c\' repeated %d time",list_character[max],list_amount[max]);
}

int main(){
    gets(string);
    ind = strlen(string);
    string_list();
}

