#include <stdio.h>

int main(){
    long long int q,KMM,number;
    scanf("%lld %lld",&q,&KMM); 
    for(int i=0;i<q-1;i++){
        scanf("%lld",&number); 
        for(int j=1;j<=number;j++){    if((KMM*j)%number==0){     KMM*=j;    break;}}
    }
    printf("%lld",1000/KMM);
}