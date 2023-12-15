#include <stdio.h>      //for input and output
#include <stdlib.h> //for random number generator               
#include <string.h>    //for string manipulation
#include <time.h> //for random number generator


int choice;
char board[8][8];

void initializeBoard() {
    char board[8][8] = {
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, 
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, 
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, 
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, 
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
    };
}   

void printBoard() {
    
    char board[8][8]; // Declare the 'board' variable

    printf("  A B C D E F G H\n");
    printf("  - - - - - - - -\n");
    printf("8 |%c|%c|%c|%c|%c|%c|%c|%c|\n", board[0][0], board[0][1], board[0][2], board[0][3], board[0][4], board[0][5], board[0][6], board[0][7]);
    printf("7 |%c|%c|%c|%c|%c|%c|%c|%c|\n", board[1][0], board[1][1], board[1][2], board[1][3], board[1][4], board[1][5], board[1][6], board[1][7]);
    printf("6 |%c|%c|%c|%c|%c|%c|%c|%c|\n", board[2][0], board[2][1], board[2][2], board[2][3], board[2][4], board[2][5], board[2][6], board[2][7]);
    printf("5 |%c|%c|%c|%c|%c|%c|%c|%c|\n", board[3][0], board[3][1], board[3][2], board[3][3], board[3][4], board[3][5], board[3][6], board[3][7]);
    printf("4 |%c|%c|%c|%c|%c|%c|%c|%c|\n", board[4][0], board[4][1], board[4][2], board[4][3], board[4][4], board[4][5], board[4][6], board[4][7]);
    printf("3 |%c|%c|%c|%c|%c|%c|%c|%c|\n", board[5][0], board[5][1], board[5][2], board[5][3], board[5][4], board[5][5], board[5][6], board[5][7]);
    printf("2 |%c|%c|%c|%c|%c|%c|%c|%c|\n", board[6][0], board[6][1], board[6][2], board[6][3], board[6][4], board[6][5], board[6][6], board[6][7]);
    printf("1 |%c|%c|%c|%c|%c|%c|%c|%c|\n", board[7][0], board[7][1], board[7][2], board[7][3], board[7][4], board[7][5], board[7][6], board[7][7]);
    printf("  - - - - - - - -\n");
    printf("  A B C D E F H H\n\n\n");
}

void isMenu() {
    printf("Select an option:\n");
    printf("1. Start Game\n");
    printf("2. Settings\n");
    printf("3. Save\n");
    printf("4. Load\n");
    printf("5. Exit\n");
    printf("Enter your choice(1-5): ");
    scanf("%d", &choice);

    return 0;
}

void startGame() {
    initializeBoard();
    printBoard();

   while(isWin() == false && isLose() == false && ischeck() == false && isDraw() == false) {
    char inputX;
    int inputY;
    
    print("Enter your move:");
    scanf("%c%d", &inputX, &inputY);
    
    int IndexX = inputX - 'A';
    int IndexY = 8 - inputY;
    
        if(isValidMove == true){
            //Make the move on the board
            //Print the board
        } else {
            //Print "Invalid Move"
        }   
    }
    return 0;
}

bool isValidMove() {
    //Check if the move is valid or
    return true;
}

bool isCheck() {

    return false;
}

bool isWin(){
    //Check for win condition if the king is captured
    //If the king is captured, return true
    //Else, return false
    //If true, print "You Win!"
    //If false, return to startGame()
return false;
}

bool isLose() {
    return false;
}

int main() {
    isMenu();

    switch(choice) {
        case 1:
            printf("Starting Game...\n");
            sleep(1);
            startGame();
            break;
        case 2:
            printf("Opening Settings...\n");
            sleep(1);
            isSettings();
            break;
        case 3:
            printf("Saving Game...\n");
            break;
        case 4:
            printf("Loading Game...\n");
            break;
        case 5:
            printf("Exiting Game...\n");
            break;
        default:
            printf("Invalid Choice\n");
    }

    intializeBoard();
    printBoard();

    return 0;
}