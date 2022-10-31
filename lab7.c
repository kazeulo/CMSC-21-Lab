#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char (*generateBoard())[3]{
    static char board[3][3] = {
        '1', '2', '3',
        '4', '5', '6',
        '7', '8', '9'
    };
    return board;
}

void printBoard(char (*board)[3]){
    int i, j;
    for(i = 0; i<3;  i++){
        for(j = 0; j<3; j++){
            printf("%c ", *(*(board+i)+j));
        }
        printf("\n");
    }
}

int checkWin(char (*board)[3]){
    
    int i, j, win=0;

    //check for horizontals
    for (i=0; i<3; i++){
        if (*(*(board+i)+0) == *(*(board+i)+1) && *(*(board+i)+1) == *(*(board+i)+2)){
            win =2;
        }
    }

    //check for verticals
    for (j=0; j<3; j++){
        if (*(*(board+0)+j) == *(*(board+1)+j) && *(*(board+1)+j) == *(*(board+2)+j)){
            win =1;
        }
    }

    //check for diagonals
    if (*(*(board + 0)+0) == *(*(board + 1)+1) && *(*(board + 1)+1) == *(*(board + 2)+2)){
        win = 1;
    }

    else if (*(*(board + 0)+2) == *(*(board + 1)+1) && *(*(board + 1)+1) == *(*(board + 2)+0)){
        win = 1;
    }
    
    return win;
}

int updateBoard(char (*board)[3], int player, int choice){
    system("cls"); 
    int win;

    switch(choice){
        case 1:
            *(*(board + 0)+0)= (player==1)?'x':'o'; break;
        case 2:
            *(*(board + 0)+1)= (player==1)?'x':'o'; break;
        case 3:
            *(*(board + 0)+2)= (player==1)?'x':'o'; break;
        case 4:
            *(*(board + 1)+0)= (player==1)?'x':'o'; break;
        case 5:
            *(*(board + 1)+1)= (player==1)?'x':'o'; break;
        case 6:
            *(*(board + 1)+2)= (player==1)?'x':'o'; break;
         case 7:
            *(*(board + 2)+0)= (player==1)?'x':'o'; break;
        case 8:
            *(*(board + 2)+1)= (player==1)?'x':'o'; break;
        case 9:
            *(*(board + 2)+2)= (player==1)?'x':'o'; break;
    }

    printBoard(board);

    if(checkWin(board)){
        printf("Winner: Player %d", player);
        return 1;
    }

    else{
        return 0;
    }

}

int main(){
    char (*board)[3];
    int player = 1, over = 0, choice;
    board = generateBoard();
    printBoard(board);

    while(over != 1){
        if(player == 1){
            printf("\nPlayer 1\nChoose number to place x.\n");
            scanf("%d", &choice);
            over = updateBoard(board, player, choice);
            player = 2;
        }

        else if(player==2){
            printf("\nPlayer 2\nChoose number to place o.\n");
            scanf("%d", &choice);
            over = updateBoard(board, player, choice);
            player = 1;
        }
    }
}