/****************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/16/2019
 ** Description: This header file contains prototype functions for the PlayerOneNode class. 
 ***************************************************************************************************/
#include "playerOneQueue.hpp"
#include <iostream>
using std::cout; 
using std::endl; 


 /************************************************************************************************
 *                                              Node ::enqueue()
 * Description: add character to tail of list 
 ************************************************************************************************/
void PlayerOneQueue::enqueue(Character *charOnePtr)
{
    if (head == nullptr && tail == nullptr)//if list has no numbers in it do this
    {
        head = new PlayerOneNode(charOnePtr);
        tail = head; 
    }
    else
    {
        PlayerOneNode *nodePtr = new PlayerOneNode(charOnePtr); //create temp pointer to store new node address
        nodePtr->next = nullptr; 
        tail->next = nodePtr; 
        tail = nodePtr; //store new node as tail
    }
}
 /************************************************************************************************
 *                                              Node ::~Node()
 * Description: default destructor that deletes all the nodes in the Node object 
 ************************************************************************************************/
PlayerOneQueue::~PlayerOneQueue()
{
    PlayerOneNode *nodePtr = head; 
    while(nodePtr != nullptr)
    {
        PlayerOneNode *trash = nodePtr; 
        nodePtr = nodePtr->next; 
        delete trash; 
    }
}
 /************************************************************************************************
 *                                              Node ::printList()
 * Description: get the character at the head of the list
 ************************************************************************************************/
Character* PlayerOneQueue::getFront()
{
    if(head == nullptr)
        cout << "No Characters remain for player one!\n";

    else
    {
        return head->charOnePtr; 
    }
     

}

/************************************************************************************************
 *                                              Node ::removeHead()
 * Description: deletes the node at the head of the list
 ************************************************************************************************/
void PlayerOneQueue::dequeue()
{
    if(head == nullptr)
        cout << "No Characters exist\n";
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
            PlayerOneNode *trash = head;
            head = head->next; 
            delete trash; 
        }
        
    }
}


/************************************************************************************************
 *                                              Node ::isEmpty()
 * Description: deletes the node at the head of the list
 ************************************************************************************************/
bool PlayerOneQueue::isEmpty()
{
    if(head == nullptr)
        return true; 

    else
        return false; 

}