// https://quera.org/problemset/236442?tab=description
#include <stdio.h>
#include <string.h>

int main(){
    char day_begin[100],days[][100] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    int crime,index,answer;
    double average[][2] = {{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0}},min_crime;
    scanf("%s",day_begin);
    for(int i=0;i<30;i++){
        scanf("%d",&crime);
        average[i%7][0] += (double) crime;   average[i%7][1]++;
    }
    for(int i=0;i<7;i++){
        if(strcmp(days[i],day_begin) == 0){     
            min_crime = average[0][0]/average[0][1];   index = i;   
            for(int j=1;j<7;j++)  
                if(average[j][0]/average[j][1] < min_crime){   
                    min_crime = average[j][0]/average[j][1];   index = (i+j) % 7;
                }
            answer = (int) min_crime;
            printf("%s %d",days[index],answer);
            break;
        }
    }
}