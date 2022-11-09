#include "Ogre.h"
#include <iostream>
using namespace std;

Ogre::Ogre()
{
	int id[3] = { 3, 9, 12 };
	inventoryIds = id;  //allows inventoryIds to take the array size of 3 and the 3 inputs
}

void Ogre::arr() //runs loop to address inventory (can you explain why my inventory didn't show correctly, please?)
{
	for (int i = 0; i < 3; i++) {
		cout << " " << *inventoryIds;
	}
}

void Ogre::Display(int x, int y) 
{
	cout << "This Ogre has the following item IDs :";
	
	arr();

	cout << ". They are at : X = " << x << " | Y = " << y << endl;
}


