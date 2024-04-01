// #include <stdio.h>
// #include <math.h>
// #define DELTA(a,b,c)    (((a)+(b)>(c))?   (1)   :   (0))
// #define FISAGORES(a,b,c)    (((a)*(a))+((b)*(b))==((c)*(c))?   (1)    :   (0))

// int main(){
//     long int n,m=0,a,b,c;
//     scanf("%d",&n);
//     for(long int i=3;i<n/3;i++){
//         for(long int j=n/3;j<=n/2;j++){
//             a=i;    b=j;    c=n-i-j;
//             if(DELTA(a,b,c)){   if(FISAGORES(a,b,c)){   printf("%d %d %d",a,b,c);   m=1;    break;}}
//         }
//     }
//     if(m==0)   printf("Impossible");
// }
#include <stdio.h>
#include <math.h>
#define FISAGORES(a,b,c)    (((a)*(a))+((b)*(b))==((c)*(c))?   (1)    :   (0))

int main(){
    int n,m=0,a,b,c;
    scanf("%d",&n);
    for(int i=1;i<n/3;i++){
        for(int j=n/3;j<=n/2;j++){
            a=i;    b=j;    c=n-i-j;
            if(FISAGORES(a,b,c)){   printf("%d %d %d",a,b,c);   m=1;    break;}
        }
        if(m==1)    break;
    }
    if(m==0)   printf("Impossible");
}