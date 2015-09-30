#include "Cells.h"

Cells::Cells(int a_xPos, int a_yPos)
{
	xPos = a_xPos;
	yPos = a_yPos;

	hasWumpus = false;
	hasPit = false;
	hasGold = false;
}

int Cells::setXPos(int pos)
{
	xPos = pos;
	return xPos;
}
int Cells::setYPos(int pos)
{
	yPos = pos;
	return yPos;
}
bool Cells::setWumpus(bool state)
{
	hasWumpus = state;
	return hasWumpus;
}
bool Cells::setGold(bool state)
{
	hasGold = state;
	return hasGold;
}
bool Cells::setPit(bool state)
{
	hasPit = state;
	return hasPit;
}