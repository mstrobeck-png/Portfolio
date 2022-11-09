#pragma once
class MovableObject
{
protected: 
	int xPosition;
	int yPosition;

public:
	void setPosition(int x, int y); //sets the position data
	void Display(int x, int y);  //displays the position using cout
};

