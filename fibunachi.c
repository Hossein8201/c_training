#include <stdio.h>
#include <math.h>

int fibunachi_recursive(int number){
    if(number==1 || number==2){   printf("%d\n",fibunachi_recursive(number));      return 1;}
    else{    
        // printf("%d\n",fibunachi_recursive(number));  
        return fibunachi_recursive(number-1)+fibunachi_recursive(number-2);
    }
}

int fibunachi_nonrecursive(int number){
    int first_number=1,second_number=1,third_number=1;
    for(int i=2;i<number;i++){
        third_number=first_number+second_number;
        first_number=second_number;
        second_number=third_number;
    }
    return third_number;
}

int fibunachi_formula(int number){
    return (pow((1+sqrt(5))/2,number)-pow((1-sqrt(5))/2,number))/sqrt(5);
}

int main(){
    int number;
    scanf("%d",&number);
    printf("the result for fibunachi recursive is = %d\n",fibunachi_recursive(number));
    printf("the result for fibunachi nonrecursive is = %d\n",fibunachi_nonrecursive(number));
    printf("the result for formula fibunachi is = %d\n",fibunachi_formula(number));
}
