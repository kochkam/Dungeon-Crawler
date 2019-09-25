#include <iostream>
#include "FBoard.hpp"
using namespace std; 

int main()
{
    
FBoard fb; 
int playerRow, playerCol, startingRow, startingCol;

cout << "Lets play a game!\n\n";
cout << "The top left corner of the board is coordinate (0,0) and the bottom right corner is ";
cout << "coordinate (7,7). The X piece's objective is to reach coordinate (7,7) and player o is";
cout << " trying to make it so player x doesn't have any legal moves. Both X piece and O pieces";
cout << " can only move one space at a time each term any direction. Except that O cannot";
cout << " move to a space that increases in both the column and row. Have fun! \n\n";


do
{

if (fb.getxCounter() == fb.getoCounter())
{    
   
    fb.printBoard(); 
    cout << "\n\n"; 
    cout << "Please enter the coordinates you would like to move X to:" << endl;
    cin >> playerRow >> playerCol; 

    while(fb.possibleX(playerRow,playerCol) == false)
    {
        cout << "This move is not possible enter new coordinates:" << endl; 
        cin >> playerRow >> playerCol; 
    }

    if(fb.possibleX(playerRow,playerCol) == true)
    {
        fb.moveX(playerRow,playerCol);
    }

    cout << endl << endl; 
    fb.getGameState(); 
}

else if(fb.getoCounter() < fb.getxCounter())
{
    fb.printBoard(); 
    cout << "\n\n";
    cout << "Please enter the starting coordinates of an O piece:\n";
    cin >> startingRow >> startingCol; 
    cout << endl;
    cout << "Please enter the coordinates you would like the O piece to move to:\n";
    cin >> playerRow >> playerCol; 

    while(fb.possibleO(startingRow,startingCol,playerRow,playerCol) == false)
    {
        cout << "This move is not possible try again\n" << endl; 
        cout << "Please enter the starting coordinates:\n";
        cin >> startingRow >> startingCol; 
        cout << endl;
        cout << "Please enter the coordinates you would like the O piece to move to:\n";
        cin >> playerRow >> playerCol; 
    }
    if(fb.possibleO(startingRow,startingCol,playerRow,playerCol) == true)
    {
        fb.moveO(startingRow,startingCol,playerRow,playerCol);

    }
    cout << endl << endl;
    fb.getGameState(); 

}

    } while (fb.getGameState() == 2);
    

if (fb.getGameState() == 1)
    cout << "O WON!!\n";
else
    cout << "X WON\n";

    return 0; 
}