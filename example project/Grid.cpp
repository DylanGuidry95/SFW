#include "Grid.h"
#include <stdlib.h>
#include <time.h>


void Grid::GenGrid(Cells *c[])
{
	srand(time(NULL));
	int randomSpawn;

	for (int i = 0; i < sizeof(c); i++)
	{
		randomSpawn = rand() % 3;
		switch (randomSpawn)
		{
		case 1:
			c[i].setWumpus(true);
			break;
		case 2:
			c[i].setPit(true);
			break;
		case 3:
			c[i].setGold(true);
			break;
		default:
			break;
		}
	}
}

void Grid::DrawGrid(Cells *c[])
{
	int x; 
	int y;
	for (int i = 0; i < sizeof(c); i++)
	{
		c[i] = Objects::drawRect(25, x + 25, 0);
	}
}