#include <stdio.h>
#include <stdlib.h>

'Implementation of Tic-Tac-Toe game'

char (*generateBoard())[3] {
    static char board[3][3] = {
        '1', '2', '3',
        '4', '5', '6',
        '7', '8', '9'
    };
    return board;
}

void printBoard(char (*board)[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", *(*(board + i) + j));
        }
        printf("\n");
    }
}

int checkWin(char (*board)[3]) {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        // Check rows
        if (*(*(board + i) + 0) == *(*(board + i) + 1) && *(*(board + i) + 1) == *(*(board + i) + 2)) {
            return (*(*(board + i) + 0) == 'X') ? 1 : 2;  // Return 1 for Player 1 (X), 2 for Player 2 (O)
        }
        // Check columns
        if (*(*(board + 0) + i) == *(*(board + 1) + i) && *(*(board + 1) + i) == *(*(board + 2) + i)) {
            return (*(*(board + 0) + i) == 'X') ? 1 : 2;
        }
    }
    
    // Check diagonals
    if (*(*(board + 0) + 0) == *(*(board + 1) + 1) && *(*(board + 1) + 1) == *(*(board + 2) + 2)) {
        return (*(*(board + 0) + 0) == 'X') ? 1 : 2;
    }
    if (*(*(board + 0) + 2) == *(*(board + 1) + 1) && *(*(board + 1) + 1) == *(*(board + 2) + 0)) {
        return (*(*(board + 0) + 2) == 'X') ? 1 : 2;
    }
    
    return 0;  // Return 0 if no winner
}

int updateBoard(char (*board)[3], int player, int choice) {
    char symbol = (player == 1) ? 'X' : 'O';
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;
    
    // If the selected spot is already occupied, return 0 (invalid move)
    if (*(*(board + row) + col) == 'X' || *(*(board + row) + col) == 'O') {
        return 0; 
    }

    *(*(board + row) + col) = symbol;  // Place X or O on the board

    printBoard(board);

    int win = checkWin(board);
    if (win != 0) {
        printf("Winner: Player %d\n", win);
        return 1;  // Game over with a winner
    }

    return 0;  // Continue the game
}

int main() {
    char (*board)[3];
    int player = 1, over = 0, choice;

    board = generateBoard();
    printBoard(board);

    while (over != 1) {
        printf("\nPlayer %d's turn\nChoose number to place %c: ", player, (player == 1) ? 'X' : 'O');
        scanf("%d", &choice);

        over = updateBoard(board, player, choice);
        if (over != 1) {
            player = (player == 1) ? 2 : 1;  // Switch player
        }
    }

    // Check for draw if all cells are filled and no winner
    int filled = 1;
    for (int i = 0; i < 3 && filled; i++) {
        for (int j = 0; j < 3; j++) {
            if (*(*(board + i) + j) != 'X' && *(*(board + i) + j) != 'O') {
                filled = 0;  // There is still an empty spot
                break;
            }
        }
    }
    
    if (!over && filled) {
        printf("It's a draw!\n");
    }

    return 0;
}
