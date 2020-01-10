/****************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/24/2019
 ** Description: This header file contains prototype functions for the PlayerTwoNode class. 
 ***************************************************************************************************/
#include "loserQueue.hpp"
#include <iostream>
using std::cout; 
using std::endl; 





/************************************************************************************************
 *                                              Node ::~LoserQueue()
 * Description: adds a number to the head of the list 
 ************************************************************************************************/
LoserQueue::~LoserQueue()
{
    LoserNode *nodePtr = head;
    while (nodePtr != nullptr)
    {
        LoserNode *trash = nodePtr;
        nodePtr = nodePtr->next;
        delete trash;
    }
}

/************************************************************************************************
 *                                              Node ::addHead()
 * Description: adds a number to the head of the list 
 ************************************************************************************************/
void LoserQueue::addHead(Character *loserPtr)
{
    if (head == nullptr && tail == nullptr) //if list has no numbers in it do this
    {
        head = new LoserNode(loserPtr);
        tail = head; 
    }
    else //else add number
    {
        LoserNode *nodePtr = new LoserNode(loserPtr); 
        nodePtr->next = head; //old head equals the next object in the
        head->prev = nodePtr; //link new node to old node 
        nodePtr->prev = nullptr; //set nodes prev to null
        head = nodePtr; //make new object head of list
    }
    
}
/************************************************************************************************
 *                                              Node ::printQueue()
 * Description: print the characters in the queue that died
 ************************************************************************************************/
void LoserQueue::printQueue()
{
    Character *temp; 

    LoserNode *nodePtr = head;
    int count = 0; 
    cout << "Here is this list of characters that died from first to last death in ascending order\n";
    while(nodePtr)
    {
        temp = nodePtr->loserPtr; 
        cout << count + 1 << ". " << temp->getType() << " " << temp->getName() << endl;
        count++; 
        nodePtr = nodePtr->next; 
    }

}