#include<stdio.h>
int main(){
    char tictac[3][3];
    int r,c;
    int count=0;
    int f=0;
    while(count<9){
        printf("Player 1 enter where you want to put X\n");
        scanf("%d %d",&r,&c);
        tictac[r-1][c-1]='X';
        count++;
        if(count>=5){
            if(tictac[0][0]=='X' && tictac[0][1]=='X' && tictac[0][2]=='X' || tictac[1][0]=='X' && tictac[1][1]=='X' && tictac[1][2]=='X' || tictac[2][0]=='X' && tictac[2][1]=='X' && tictac[2][2]=='X')
            {
                printf("Player 1 won!");
                f=1;
                break;
            }
            if(tictac[0][0]=='X' && tictac[1][0]=='X' && tictac[2][0]=='X' || tictac[0][1]=='X' && tictac[1][1]=='X' && tictac[2][1]=='X' || tictac[0][2]=='X' && tictac[1][2]=='X' && tictac[2][2]=='X')
            {
                f=1;
                printf("Player 1 won!");
                break;
            }
            if(tictac[0][0]=='X' && tictac[1][1]=='X' && tictac[2][2]=='X'){
                f=1;
                printf("Player 1 won!");
                break;
            }
            if(tictac[2][0]=='X' && tictac[1][1]=='X' && tictac[0][2]=='X'){
                f=1;
                printf("Player 1 won!");
                break;
            }
        }

        //Player 2 turn
        
        printf("Player 2 enter where you want to put O\n");
        scanf("%d %d",&r,&c);
        tictac[r-1][c-1]='O';
        count++;
        if(count>=5){
            if(tictac[0][0]=='O' && tictac[0][1]=='O' && tictac[0][2]=='O' || tictac[1][0]=='O' && tictac[1][1]=='X' && tictac[1][2]=='O' || tictac[2][0]=='O' && tictac[2][1]=='O' && tictac[2][2]=='O')
            {
                f=1;
                printf("Player 2 won!");
                break;
            }
            if(tictac[0][0]=='O' && tictac[1][0]=='O' && tictac[2][0]=='O' || tictac[0][1]=='O' && tictac[1][1]=='O' && tictac[2][1]=='O' || tictac[0][2]=='O' && tictac[1][2]=='O' && tictac[2][2]=='O')
            {
                f=1;
                printf("Player 2 won!");
                break;
            }
            if(tictac[0][0]=='O' && tictac[1][1]=='O' && tictac[2][2]=='O'){
                f=1;
                printf("Player 2 won!");
                break;
            }
            if(tictac[2][0]=='O' && tictac[1][1]=='O' && tictac[0][2]=='O'){
                f=1;
                printf("Player 2 won!");
                break;
            }
        }     
    }
    if(f==0){
        printf("Draw!");
    }
    return 0;
}