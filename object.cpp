/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the main function for the final project
 ***************************************************************************************************/
#include "object.hpp"
#include "item.hpp"
#include "player.hpp"
#include "validation.hpp"
#include "key.hpp"
#include "longsword.hpp"
#include "crossbow.hpp"
#include "armor.hpp"
#include "helmet.hpp"
using std::cout; 
using std::endl; 


/************************************************************************************************
 *                                              Validation ::specialEvent()
 * Description: special event for the object space that generates an item for user to pickup 
 ************************************************************************************************/
void Object::specialEvent()
{
    int selection; 
    int id; 
    id = rand() % 5 + 1; //randomly generate an item for the user to pick up 

    if(id == 1)
    {
        Key newItem; 
        cout << "You stumble into on of the dungeons armorys and quickly search for something useful.\n";
        cout << "You found a " << newItem.returnName() << newItem.returnDescription() << endl; //prints item and its description 
        cout << "Would you like to add the item to your inventory?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        selection = validateInteger(); //validate users selection form above prompt
        if(selection == 1)
        {
            if (player->inventory.size() >= 3)//if inventory is full 
            {
                cout << "Your inventory is full!\n";
                cout << "Would you like to drop an item in your inventory to make room?\n";
                cout << "1. Yes\n";
                cout << "2. No\n";
                selection = validateInteger(); 
                if(selection == 1)
                {
                    for (int i = 0; i != player->inventory.size(); i++) //print iteam in inventory
                    {
                        cout << i + 1 << ". " << player->inventory[i].returnName() << endl;                 
                    }
                    cout << "Here are the items you have in your inventory. Would you like to drop the most recent item #3?\n";
                    cout << "1. Yes\n";
                    cout << "2. No\n";
                    selection = validateIntegerAgain(); //validate entry 

                    if(selection == 1) //add item to inventory 
                    {
                        player->inventory.pop_back();
                        cout << "Item 3 has been discarded and replaced with a " << newItem.returnName() << endl;
                        player->inventory.push_back(newItem);
                    }
                    else //dont add item 
                    {
                        cout << "The new item was not added to your inventory\n";
                    }
                }
                else
                {
                    cout << "The " << newItem.returnName() << " you found was discarded.\n";
                }
            }
            else //add new item
            {
                player->inventory.push_back(newItem);
                cout << "The item has been added to your inventory.\n";
            }
            
        }
    }

    if(id == 2)
    {
        Helmet newItem; 
        cout << "You found a " << newItem.returnName() << newItem.returnDescription() << endl; 
        cout << "Would you like to add the item to your inventory?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        selection = validateInteger(); 
        if(selection == 1)
        {
            if (player->inventory.size() >= 3)
            {
                cout << "Your inventory is full!\n";
                cout << "Would you like to drop an item in your inventory to make room?\n";
                cout << "1. Yes\n";
                cout << "2. No\n";
                selection = validateInteger(); 
                if(selection == 1)
                {
                    for (int i = 0; i != player->inventory.size(); i++)
                    {
                        cout << i + 1 << ". " << player->inventory[i].returnName() << endl;                 
                    }
                    cout << "Here are the items you have in your inventory. Would you like to drop the most recent item #3?\n";
                    cout << "1. Yes\n";
                    cout << "2. No\n";
                    selection = validateIntegerAgain(); 

                    if(selection == 1)
                    {
                        player->inventory.pop_back();
                        cout << "Item 3 has been discarded and replaced with a " << newItem.returnName() << endl;
                        player->inventory.push_back(newItem);
                    }
                    else
                    {
                        cout << "The new item was not added to your inventory\n";
                    }
                }
                else
                {
                    cout << "The " << newItem.returnName() << " you found was discarded.\n";
                }
            }
            else
            {
                player->inventory.push_back(newItem);
                cout << "The item has been added to your inventory.\n";
            }
            
        }

    }

    if(id == 3)
    {
        Armor newItem; 
        cout << "You found a " << newItem.returnName() << newItem.returnDescription() << endl; 
        cout << "Would you like to add the item to your inventory?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        selection = validateInteger(); 
        if(selection == 1)
        {
            if (player->inventory.size() >= 3)
            {
                cout << "Your inventory is full!\n";
                cout << "Would you like to drop an item in your inventory to make room?\n";
                cout << "1. Yes\n";
                cout << "2. No\n";
                selection = validateInteger(); 
                if(selection == 1)
                {
                    
                    for (int i = 0; i != player->inventory.size(); i++)
                    {
                        cout << i + 1 << ". " << player->inventory[i].returnName() << endl;                 
                    }
                    cout << "Here are the items you have in your inventory. Would you like to drop the most recent item #3?\n";
                    cout << "1. Yes\n";
                    cout << "2. No\n";
                    selection = validateIntegerAgain(); 

                    if(selection == 1)
                    {
                        player->inventory.pop_back();
                        cout << "Item 3 has been discarded and replaced with a " << newItem.returnName() << endl;
                        player->inventory.push_back(newItem);
                    }
                    else
                    {
                        cout << "The new item was not added to your inventory\n";
                    }
                }
                else
                {
                    cout << "The " << newItem.returnName() << " you found was discarded.\n";
                }
            }
            else
            {
                player->inventory.push_back(newItem);
                cout << "The item has been added to your inventory.\n";
            }
            
        }


    }
    if(id == 4)
    {
        Crossbow newItem; 
        cout << "You found a " << newItem.returnName() << newItem.returnDescription() << endl; 
        cout << "Would you like to add the item to your inventory?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        selection = validateInteger(); 
        if(selection == 1)
        {
            if (player->inventory.size() >= 3)
            {
                cout << "Your inventory is full!\n";
                cout << "Would you like to drop an item in your inventory to make room?\n";
                cout << "1. Yes\n";
                cout << "2. No\n";
                selection = validateInteger(); 
                if(selection == 1)
                {
                    for (int i = 0; i != player->inventory.size(); i++)
                    {
                        cout << i + 1 << ". " << player->inventory[i].returnName() << endl;                 
                    }
                    cout << "Here are the items you have in your inventory. Would you like to drop the most recent item #3?\n";
                    cout << "1. Yes\n";
                    cout << "2. No\n";
                    selection = validateIntegerAgain(); 

                    if(selection == 1)
                    {
                        player->inventory.pop_back();
                        cout << "Item 3 has been discarded and replaced with a " << newItem.returnName() << endl;
                        player->inventory.push_back(newItem);
                    }
                    else
                    {
                        cout << "The new item was not added to your inventory\n";
                    }
                }
                else
                {
                    cout << "The " << newItem.returnName() << " you found was discarded.\n";
                }
            }
            else
            {
                player->inventory.push_back(newItem);
                cout << "The item has been added to your inventory.\n";
            }
            
        }

    }
    if (id == 5)
    {
        Longsword newItem; 
        cout << "You found a " << newItem.returnName() << newItem.returnDescription() << endl; 
        cout << "Would you like to add the item to your inventory?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        selection = validateInteger(); 
        if(selection == 1)
        {
            if (player->inventory.size() >= 3)
            {
                cout << "Your inventory is full!\n";
                cout << "Would you like to drop an item in your inventory to make room?\n";
                cout << "1. Yes\n";
                cout << "2. No\n";
                selection = validateInteger(); 
                if(selection == 1)
                {
                    
                    for (int i = 0; i != player->inventory.size(); i++)
                    {
                        cout << i + 1 << ". " << player->inventory[i].returnName() << endl;                 
                    }
                    cout << "Here are the items you have in your inventory. Would you like to drop the most recent item #3?\n";
                    cout << "1. Yes\n";
                    cout << "2. No\n";
                    selection = validateIntegerAgain(); 

                    if(selection == 1)
                    {
                        player->inventory.pop_back();
                        cout << "Item 3 has been discarded and replaced with a " << newItem.returnName() << endl;
                        player->inventory.push_back(newItem);
                    }
                    else
                    {
                        cout << "The new item was not added to your inventory\n";
                    }
                }
                else
                {
                    cout << "The " << newItem.returnName() << " you found was discarded.\n";
                }
            }
            else
            {
                player->inventory.push_back(newItem);
                cout << "The item has been added to your inventory.\n";
            }
            
        }
    }
}

    

