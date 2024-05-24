#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string_in[10000], string_out[10000], string_copy[10000];
    gets(string_in);       gets(string_out);
    strcpy(string_copy ,string_out);     strcat(string_out ,string_copy);
    char *pointer_scan = strstr(string_out ,string_in);
    if(pointer_scan)    printf("Yes");
    else    printf("No");
}