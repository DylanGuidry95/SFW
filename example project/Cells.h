#pragma once

class Cells
{
	int xPos;
	int yPos;

	bool hasWumpus;
	bool hasGold;
	bool hasPit;
public:
	int getXPos() { return xPos; }
	int getYPos() { return yPos; }
	bool getWumpus() { return hasWumpus; }
	bool getGold() { return hasGold; }
	bool getPit() { return hasPit; }

	int setXPos(int);
	int setYPos(int);
	bool setWumpus(bool);
	bool setGold(bool);
	bool setPit(bool);

	Cells(int, int);
};