/****************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/16/2019
 ** Description: This header file contains prototype functions for the PlayerTwoNode class. 
 ***************************************************************************************************/
#include "playerTwoQueue.hpp"
#include <iostream>
using std::cout; 
using std::endl; 


 /************************************************************************************************
 *                                              Node ::addTail()
 * Description: add character to tail of list 
 ************************************************************************************************/
void PlayerTwoQueue::enqueue(Character *charTwoPtr)
{
    if (head == nullptr && tail == nullptr)//if list has no numbers in it do this
    {
        head = new PlayerTwoNode(charTwoPtr);
        tail = head; 
    }
    else
    {
        PlayerTwoNode *nodePtr = new PlayerTwoNode(charTwoPtr); //create temp pointer to store new node address
        nodePtr->next = nullptr; 
        tail->next = nodePtr; 
        tail = nodePtr; //store new node as tail
    }
}
 /************************************************************************************************
 *                                              Node ::~Node()
 * Description: default destructor that deletes all the nodes in the Node object 
 ************************************************************************************************/
PlayerTwoQueue::~PlayerTwoQueue()
{
    PlayerTwoNode *nodePtr = head; 
    while(nodePtr != nullptr)
    {
        PlayerTwoNode *trash = nodePtr; 
        nodePtr = nodePtr->next; 
        delete trash; 
    }
}
 /************************************************************************************************
 *                                              Node ::getFront()
 * Description: return character object in head node
 ************************************************************************************************/
Character* PlayerTwoQueue::getFront()
{
    if(head == nullptr)
        cout << "No Characters remain for player two!\n";

    else
    {
        return head->charTwoPtr; 
    }
     

}

/************************************************************************************************
 *                                              Node ::removeHead()
 * Description: deletes the node at the head of the list
 ************************************************************************************************/
void PlayerTwoQueue::dequeue()
{
    if(head == nullptr)
        cout << "No Characters exist for player two\n";
    else
    {
        if(head->next == nullptr) //if no other nodes are in the list
        {
            delete head; 
            tail = nullptr; 
            head = nullptr; 
        }
        else
        {
                PlayerTwoNode *trash = head;
                head = head->next; 
                delete trash; 
        }
        
    }
}
/************************************************************************************************
 *                                              Node ::isEmpty()
 * Description: deletes the node at the head of the list
 ************************************************************************************************/
bool PlayerTwoQueue::isEmpty()
{
    if(head == nullptr)
        return true; 

    else
        return false; 

}