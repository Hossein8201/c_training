// https://quera.org/problemset/12912
#include <stdio.h>

int number;
int list_subcategori[1000000]={0};

void print_subcategori(int index){
    printf("{");
    for(int i=0;i<=index;i++){
        if(i==0)    printf("%d",list_subcategori[i]);
        else    printf(", %d",list_subcategori[i]);
    }
    printf("}\n");    
}

int subcategori(int index){
    if(list_subcategori[index-1]==number && index!=0)     return 1; 
    else{
        for(int i=list_subcategori[index-1]+1;i<=number;i++){
            list_subcategori[index]=i;
            print_subcategori(index);
            subcategori(index+1);
        }
    }
}

int main(){
    int index=0;
    scanf("%d",&number);
    printf("{}\n");
    subcategori(index);
}