/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        8/14/2019
 ** Description: a class named FBoard for playing a game, where player x is trying to get her
  piece to corner square (7, 7), and player o is trying to make it so player x doesn't have any 
  legal moves.
 ***************************************************************************************************/
#ifndef FBOARD_HPP
#define FBOARD_HPP

enum gameStatus {X_WON, O_WON, UNFINISHED}; //X_WON = 0, O_WON = 1, UNFINISHED = 2

class FBoard
{
    private: 
        gameStatus gameState; //holds an enumarated data type gameStatus 
        int xRow; //data member that tracks x's row
        int xCol; //data member that tracks x's col
        char board[8][8]; //create an unitialized array of characters 
        int xCounter = 0; 
        int oCounter = 0; 
       

    public:
        FBoard(); //default contructor that creates the gameboard and places the pieces for x and o players
        gameStatus getGameState(); // returns the value of gameState
        bool moveX(int row, int columnn);// takes parameters of the row and column of the square to move to and returns if the move is true or false
        bool moveO(int startingRow, int startingCol, int row, int column);// takes parameters of the starting row and column of O and new coordiantes for O to move to and returns if the move is true or false  
        void printBoard();
        int getxCounter(); 
        int getoCounter(); 
        bool possibleX(int row, int column); 
        bool possibleO(int startingRow, int StartingCol, int row, int column);
};
#endif 

 