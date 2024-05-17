#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// global variable
int n,m,p,q;

void print_matrix(int matrix[n][q]){
    for(int i=0;i<n;i++){    for(int j=0;j<q;j++)    printf("%d ",matrix[i][j]);     printf("\n");}
}

int matrix_multiple_nonrecursive(int matrix1[n][m],int matrix2[p][q]){
    if(m != p){     printf("You cannot multiply this matrices )-: ");    exit(-1);}   // the condition of multiplication matrix 
    // calculate the answer with formula ->
    int matrix_answer[n][q];
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            int wise = 0;
            for(int k=0;k<m;k++)   wise += matrix1[i][k]*matrix2[k][j];    matrix_answer[i][j] = wise;        
        }
    }
    printf("the answer of nonrecursive formula: \n");
    print_matrix(matrix_answer);    // <- call the function to print the answer
}

int matrix_multiple_recursive(){
    ;
}

int main(){
    // give your defult matrixs: 
    // first matrix:
    printf("Enter your first matrix row: ");    scanf("%d",&n);     printf("and first column: ");     scanf("%d",&m);
    printf("Enter your first matrix:\n");       int matrix1[n][m];
    for(int i=0;i<n;i++)    for(int j=0;j<m;j++)    scanf("%d",&matrix1[i][j]);
    printf("\n");
    // second matrix:
    printf("Enter your second matrix row: ");    scanf("%d",&p);     printf("and second column: ");     scanf("%d",&q);
    printf("Enter your second matrix:\n");       int matrix2[p][q];
    for(int i=0;i<p;i++)    for(int j=0;j<q;j++)    scanf("%d",&matrix2[i][j]);
    printf("\n");
    // call your functions to calculate the answer: ->
    matrix_multiple_nonrecursive(matrix1,matrix2);
    matrix_multiple_recursive();
}