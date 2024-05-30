#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char ciphertext[1000000];
char code[1000][1000];

void square_code(char text[]){
    // Step 1 : Normalization
    int index = 0;
    for(int i=0;i<strlen(text);i++){
        int ascii_number = (int) text[i];
        if(ascii_number >= 65 && ascii_number <= 90)    ciphertext[index++] = (char) (ascii_number+32);
        else if(ascii_number >= 97 && ascii_number <= 122)      ciphertext[index++] = (char) (ascii_number);
    }
    // Step 2 : Make Rectangle
    int row = sqrt(index);   int column = ceil((index*1.0)/row);
    int index_ = index;
    for(int i=index_;i<column*row;i++)   ciphertext[index++] = ' ';
    // Step 3 : print ciphertext
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++)
            printf("%c",ciphertext[j*column+i]);
        printf("!");
    }
}

int main(){
    char text[100000];
    gets(text);
    square_code(text);
}