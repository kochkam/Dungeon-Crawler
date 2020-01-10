/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/16/2019
 ** Description: This header file contains prototype functions for the Queue class. 
 ***************************************************************************************************/
#ifndef PLAYERTWOQUEUE_HPP
#define PLAYERTWOQUEUE_HPP
#include "character.hpp"

class PlayerTwoQueue
{

    protected:
        struct PlayerTwoNode
        {
            Character *charTwoPtr;
            PlayerTwoNode *next; 
            PlayerTwoNode(Character *charTwoPtr, PlayerTwoNode *next = nullptr){this->charTwoPtr = charTwoPtr, this->next = next;}
        };

        PlayerTwoNode *head; 
        PlayerTwoNode *tail; 

    public: 
        PlayerTwoQueue(){head = nullptr, tail = nullptr;}
        ~PlayerTwoQueue(); 
        void enqueue(Character *charTwoPtr);
        Character* getFront(); 
        void dequeue(); 
        bool isEmpty(); 
};

#endif