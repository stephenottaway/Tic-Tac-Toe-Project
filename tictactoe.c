#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 100
#define BOARD_SIZE 9

/*TO DO: Add function to check if game is over, get rid of initialization functions (will find solution to those later), add function to modify string for board printing, and add function to check if a tile is empty */

char board[] = "_a[0]__|_a[1]__|_a[2]__\n_a[3]__|_a[4]__|_a[5]__\n a[6]  | a[7]  | a[8]  \n";


typedef struct {
    int gameOver;
    int gameState[BOARD_SIZE];
} Game;


typedef struct {
    char marker;
    int boardStatus[BOARD_SIZE];
} Player;


// VERY BAD IN CURRENT STATE! C WON'T THROW AN ERROR IF THE METHOD IS PASSED AN ARRAY WITH LESS THAN 9 ELEMENTS AND WILL ACCESS DATA THAT IT SHOULDN'T BE ABLE TO GET! (when only pointer to gameState was passed into the function)
// Temporary fix (may think of something better later) by passing in size of array into method parameters
int checkForFullBoard(int* gameState, size_t size) {
    if(size != BOARD_SIZE) {
	printf("Error: size of array must be 9\n");
	return 0;
    }
    // May store as a variable later to make the code a bit cleaner
    return gameState[0] && gameState[1] && gameState[2] && gameState[3] && gameState[4] && gameState[5] && gameState[6] && gameState[7] && gameState[8]; 
} 

int checkForThreeInARow(int* board, size_t size) {
    if(size != BOARD_SIZE) {
	printf("Error: size of array must be 9\n");
	return 0;
    }
    // TO DO: Add all possible combinations of three in a row that would end the game (may store as ints later to clean up the code, separating into three in a row on the rows, the columns, and along the diagonals)
    return ((board[0] && board[1] && board[2]) || (board[3] && board[4] && board[5]) || (board[6] && board[7] && board[8]) || (board[0] && board[3] && board[6]) || (board[1] && board[4] && board[7]) || (board[2] && board[5] && board[8])
    || (board[0] && board[4] && board[8]) || (board[2] && board[4] && board[6]));
}


// Comment out unused/incorrect methods for now
/*void displayBoard(char* board) {
    printf("%s\n",board);
}

initializeGame(Game* const game) {
    game->gameOver = 0;
    game->gameState = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
}


void initializep1() {
    Player p1 = { 'X' , { 0, 0, 0, 0, 0, 0, 0, 0 } };
}

void initializep2() {
    Player p2 = { 'O' , { 0, 0, 0, 0, 0, 0, 0, 0 } };
} 
*/   
    

int main(int argc, char** argv) {
    if (argc != 1) {
	printf("Program initialization failed\n");
	return 1;
    }
    
    return 0;
} 
