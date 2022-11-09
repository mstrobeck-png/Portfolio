#pragma once
#include "MovableObject.h"
class Ogre :
    public MovableObject
{
private:
    int* inventoryIds;
 

public:
    Ogre();  //initalizes the array
    void arr(); //loops inventory
    void Display(int x, int y); //output
};


