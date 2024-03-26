#include <stdio.h>
#include <string.h>
//This is a defecult problem
int main(){
    int n,t,bet=0;
    char chart[11][11],answer[1000][1000]={""};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&t);
        for(int j=0;j<t-1;j++){
            for(int k=0;k<t-1;k++){
               scanf("%c",&chart[j][k]);
            }
            scanf("%c ",&chart[j][t-1]);
        }
        for(int k=0;k<t;k++)    scanf("%c",&chart[t-1][k]);
        for(int j=0;j<t;j++){   for(int k=0;k<t;k++){   
            if(chart[j][k]=='1' && bet==0){
                if(chart[j][k+1]=='1' && chart[j+1][k]=='1' && chart[j+1][k+1]=='1')    strcat(answer[i],"SQUARE");
                else    strcat(answer[i],"TRIANGLE");
                bet=1;
            }
        }}
        bet=0; 
    }
    for(int i=0;i<n;i++)    printf("%s\n",answer[i]);
}