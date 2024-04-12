#include <stdio.h>
#define N 1000

// the type of sorting: selection , bubble , insertion

void swap(int array[],int i,int j){
    int middle = array[i];
    array[i] = array[j];
    array[j] = middle;
}

void selection_sort(int array[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]>array[j])     swap(array,i,j);
        }
    }
}

void bubble_sort(int array[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1])     swap(array,j,j+1);
        }
    }
}

void insertion_sort(int array[],int size){
    int j,k;
    for(int i=1;i<size;i++){
        k=i;
        j=i-1;
        while(array[j]>array[k] && k>0){
            swap(array,j,k);
            j-=1;
            k-=1;
        }
    }
}

int main(){
    int size,array[N];
    char type_sort;
    printf("your size of array: ");
    scanf("%d",& size);
    printf("give your array members: ");
    for(int i=0;i<size;i++)     scanf("%d",&array[i]);      // give the array
    printf("choose your type of sort you want: ");
    scanf(" %c",& type_sort);
    // call the fuction
    if(type_sort == 's')     selection_sort(array,size);
    else if(type_sort== 'b')     bubble_sort(array,size);
    else if(type_sort== 'i')    insertion_sort(array,size);
    // print the sorted array
    printf("the sorted array:");
    for(int i=0;i<size;i++)     printf("  %d",array[i]);
}