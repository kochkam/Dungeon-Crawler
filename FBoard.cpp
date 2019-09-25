/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        8/14/2019
 ** Description: a class named FBoard for playing a game, where player x is trying to get her
  piece to corner square (7, 7), and player o is trying to make it so player x doesn't have any 
  legal moves.
 ***************************************************************************************************/
#include "FBoard.hpp"
#include <iostream>
using std::cout; 
/***************************************************************************************************
 *                                            FBoard::FBoard();
 ** Description:  default constructor that initializes the array to empty (you can use whatever
  character you want to represent empty).  It should put four o pieces at the following (row, 
  column) coordinates: (5, 7), (6, 6), (7, 5), and (7, 7).  It should put an x piece at (0, 0). 
  It should also initialize the other data members.
 ***************************************************************************************************/
FBoard::FBoard()
{
    char oPiece = 'O'; //initalize variables 
    char xPiece = 'X';
    
    for(int Frow = 0; Frow < 8; Frow++) //this for loop intalizes the array with the character 'E'
        for(int Fcol = 0; Fcol < 8; Fcol++)
            board[Frow][Fcol] = 'E';

    board[5][7] = oPiece; //sets the following array locations with the value O to setup the starting locations of O's pieces
    board[6][6] = oPiece;
    board[7][5] = oPiece; 
    board[7][7] = oPiece; 

    board[0][0] = xPiece; //sets the starting location of x's piece

    gameState = UNFINISHED; // gameState is set to default the game to unfinished 

    xRow = 0; //sets the member variable of xRow to zero specifying the row location of x
    xCol = 0; // sets the memebr variable of xCol to zero specifying the column location of x

}

/***************************************************************************************************
 *                                            FBoard::gameStatus getGameState();
 ** Description:  A method called getGameState that just returns the value of gameState.
 ***************************************************************************************************/
gameStatus FBoard::getGameState()
{
    return gameState; //returns the value of gameState 
}

/***************************************************************************************************
 *                                            FBoard::moveX()
 ** Description:  A method called moveX that takes as parameters the row and column of the square 
 to move to.  If the desired move is not allowed, or if the game has already been won, it should
 just return false.  Otherwise it should make the move and return true.  A piece belonging to x 
 can move 1 square diagonally in any direction.  A piece is not allowed to move off the board or
 to an occupied square.  If x's move gets her piece to square (7, 7), then gameState should be 
 set to X_WON.
 ***************************************************************************************************/
bool FBoard::moveX(int row, int column)
{
    if(gameState == X_WON || gameState == O_WON) //tests if the game has already been won/finished
        return false; 
    
    else if(row > 7 || column > 7 || row < 0 || column < 0) //tests if the paramets entered are out of the arrays bounds 
        return false; 
    
    else if(board[row][column] == 'O') // tests to see if the new location has an O piece in it already
        return false; 

    else if((xRow + 1 == row && xCol + 1 == column) || (xRow - 1 == row && xCol - 1 == column) || (xRow -1 == row && xCol + 1 == column) || (xRow + 1 == row && xCol - 1 == column))
    {     //the above if statement tests for all possible legal moves of x from its current location
        board[xRow][xCol] = 'E'; //sets previous location of x to 'E"
        xRow = row; //sets xRow equal to the parameter row entered
        xCol = column; //sets xCol equal to the parameter column entered
        board[row][column] = 'X'; //sets the array location of parameters row and collumn equal to 'X'
        xCounter++;
        if (row == 7 && column == 7) //tests for the winning condition of the game for X
            gameState = X_WON; 

        return true; 
    }

    else  //else return false to ensure X piece is not moved illegaly unless it meets the above else if statement
        return false; 
}

/***************************************************************************************************
 *                                            FBoard::moveO()
 ** Description:  A method called moveO that takes as parameters the row and column to move from,
  and the row and column to move to.  If the first pair of coordinates doesn't hold one of player
  o's pieces, or if the desired move is not allowed, or if the game has already been won, it 
  should just return false.  Othewise it should make the move and return true.  A piece belonging
  to player o can move 1 square diagonally, It is not allowed to move off the 
  board or to an occupied square.  If o's move leaves no legal move for x, then gameState should
  be set to O_WON.
 ***************************************************************************************************/
bool FBoard::moveO(int startingRow, int startingCol, int row, int column)
{
    if(gameState == X_WON || gameState == O_WON)//tests if the game has already been won/finished
        return false; 

    else if(board[startingRow][startingCol] != 'O' || board[row][column] == 'X' || board[row][column] == 'O')
        return false;  //tests if the starting array location does not hold the value of O or if it holds 'X' or if the new location for O is already occupied by an O piece 

    else if(row > 7 || column > 7 || row < 0 || column < 0) //tests if the new array coordinates for O are out of bounds of the array 
        return false; 

    else if((startingRow -1 == row && startingCol - 1 == column) || (startingRow -1 == row && startingCol +1 == column) || (startingRow + 1 == row && startingCol - 1 == column))
    { //the above if statement tests for all the legal moves of an O piece 
        board[startingRow][startingCol] = 'E'; //sets old location of O piece to 'O'
        board[row][column] = 'O'; //sets new array location set to 'O'
        oCounter++;  
        if(possibleX(xRow + 1,xCol +1) == false && possibleX(xRow -1,xCol - 1) == false && possibleX(xRow -1, xCol +1 ) == false && possibleX(xRow + 1, xCol - 1) == false)
            gameState = O_WON; //the above statement tests to see if X has any legal moves left after O's move then sets the gameState to O_WON if no legal moves for x remain  

        else
        {
            gameState = UNFINISHED;  //else gameState remains UNFINSHED as long as at least one legal move remains for x 
        }
        
        return true; 
    }
    else //else return false to ensure O piece is not moved illegaly unless it meets the above else if statement
    {
        return false; 
    }
    
}

/***************************************************************************************************
 *                                            void FBoard::printBoard()
 ** Description:  A method that prints the players board
 ***************************************************************************************************/

void FBoard::printBoard()
{
    for(int countRow = 0; countRow < 8; countRow++)
        for(int countCol = 0; countCol < 8; countCol++)
        {
            cout << board[countRow][countCol] << " ";
            if(countCol == 7)
                cout << "\n";
        }        

}
/***************************************************************************************************
 *                                            void FBoard::possibleX()
 ** Description:  A method that tests if the moving of x piece is valid
 ***************************************************************************************************/
bool FBoard::possibleX(int row, int column)
{
if(gameState == X_WON || gameState == O_WON) //tests if the game has already been won/finished
    return false; 
    
else if(row > 7 || column > 7 || row < 0 || column < 0) //tests if the paramets entered are out of the arrays bounds 
    return false; 
    
else if(board[row][column] == 'O') // tests to see if the new location has an O piece in it already
    return false; 

else if((xRow + 1 == row && xCol + 1 == column) || (xRow - 1 == row && xCol - 1 == column) || (xRow -1 == row && xCol + 1 == column) || (xRow + 1 == row && xCol - 1 == column)) //tests if X's move is legal
    return true; 

else 
    return false; 
}

/***************************************************************************************************
 *                                            int FBoard::getxCounter()
 ** Description:  Returns the value of xcounter
 ***************************************************************************************************/
int FBoard::getxCounter()
{
    return xCounter; 

}

/***************************************************************************************************
 *                                            int FBoard::getoCounter()
 ** Description:  Returns the value of ocounter
 ***************************************************************************************************/

int FBoard::getoCounter()
{
    return oCounter; 
}

/***************************************************************************************************
 *                                            bool FBoard::possibleO()
 ** Description:  A method that determines if the move of an O piece is valid
 ***************************************************************************************************/
bool FBoard::possibleO(int startingrow, int startingcol, int row, int column)
{
if(gameState == X_WON || gameState == O_WON)//tests if the game has already been won/finished
    return false; 

else if(board[startingrow][startingcol] != 'O' || board[row][column] == 'X' || board[row][column] == 'O')
    return false;  //tests if the starting array location does not hold the value of O or if it holds 'X' or if the new location for O is already occupied by an O piece 

else if(row > 7 || column > 7 || row < 0 || column < 0) //tests if the new array coordinates for O are out of bounds of the array 
    return false; 

else if((startingrow -1 == row && startingcol - 1 == column) || (startingrow -1 == row && startingcol +1 == column) || (startingrow + 1 == row && startingcol - 1 == column))
    return true; 

else
    return false; 
}