#include <stdio.h>
#include <stdlib.h>


const int BOARDSIZE = 9;

typedef struct {
    char marker;
    int boardStatus[BOARDSIZE];
} player;




void beginGame() {
    printf("___|___|___\n___|___|___\n   |   |   \n");
}




int main(int argc, char** argv) {
    if (argc != 1) {
	printf("Program initialization failed\n");
	return 1;
    }
    
    player p1 = { 'X' , { 0, 0, 0, 0, 0, 0, 0, 0, 0 } };

    printf("Index 1 is %d\n", p1.boardStatus[0]);
    
    
    
    
    return 0;
} 
