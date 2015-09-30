#pragma once
#include "Cells.h"
#include "DrawObjects.h"

class Grid
{
public:
	Grid() {}
	void GenGrid(Cells*[]);
	void DrawGrid(Cells*[]);
};