/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/3/2019
 ** Description: This header file contains prototype functions that print the starting menu and 
  validates user input. 
 ***************************************************************************************************/
#ifndef VALIDATION_HPP
#define VALIDATION_HPP
#include <string>
using std::string;  

void printMenu1(); 
void printMenu2();
int validateInteger(); 
int validateIntegerAgain(); 
void playAgain(); 
string validateName(); 


#endif