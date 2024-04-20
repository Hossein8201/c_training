// https://quera.org/problemset/10164
#include <stdio.h>
#include <string.h>

int main(){
    char logic_game_board[100][100];
    int move=0;
    for(int i=0;i<7;i++){     for(int j=0;j<8;j++)     scanf("%c",&logic_game_board[i][j]);}
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(logic_game_board[i][j]=='o'){if(logic_game_board[i][j+1]=='o'){if(logic_game_board[i][j+2]=='.')     move+=1;}}
            if(logic_game_board[i][j]=='o'){if(logic_game_board[i][j-1]=='o'){if(logic_game_board[i][j-2]=='.')     move+=1;}}
            if(logic_game_board[i][j]=='o'){if(logic_game_board[i+1][j]=='o'){if(logic_game_board[i+2][j]=='.')     move+=1;}}
            if(logic_game_board[i][j]=='o'){if(logic_game_board[i-1][j]=='o'){if(logic_game_board[i-2][j]=='.')     move+=1;}}
        }
    }
    printf("%d",move);
}