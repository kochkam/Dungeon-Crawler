/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/16/2019
 ** Description: This header file contains prototype functions for the Queue class. 
 ***************************************************************************************************/
#ifndef LOSERQUEUE_HPP
#define LOSERQUEUE_HPP
#include "character.hpp"

class LoserQueue
{

    protected:
        struct LoserNode
        {
            Character *loserPtr;
            LoserNode *next; 
            LoserNode *prev;
            LoserNode(Character *loserPtr, LoserNode *next = nullptr, LoserNode *prev = nullptr){this->loserPtr = loserPtr, this->next = next, this->prev = prev;}
        };

        LoserNode *head; 
        LoserNode *tail; 

    public: 
        LoserQueue(){head = nullptr, tail = nullptr;}
        ~LoserQueue(); 
        void addHead(Character *loserPtr);
        void printQueue(); 
};
#endif