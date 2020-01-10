/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/16/2019
 ** Description: This header file contains prototype functions for the Queue class. 
 ***************************************************************************************************/
#ifndef PLAYERONEQUEUE_HPP
#define PLAYERONEQUEUE_HPP
#include "character.hpp"

class PlayerOneQueue
{

    protected:
        struct PlayerOneNode
        {
            Character *charOnePtr;
            PlayerOneNode *next; 
            PlayerOneNode(Character *charOnePtr, PlayerOneNode *next = nullptr){this->charOnePtr = charOnePtr, this->next = next;}
        };

        PlayerOneNode *head; 
        PlayerOneNode *tail; 

    public: 
        PlayerOneQueue(){head = nullptr, tail = nullptr;}
        ~PlayerOneQueue(); 
        void enqueue(Character *charOnePtr);
        Character* getFront(); 
        void dequeue(); 
        bool isEmpty(); 
};

#endif
