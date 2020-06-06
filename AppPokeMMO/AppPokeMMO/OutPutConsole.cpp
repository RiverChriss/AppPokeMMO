#include "OutPutConsole.h"

using namespace std;

void OutPutConsole::addDrawingObj(size_t x, size_t y, DrawingObj* obj)
{
	if (grid.size() == 0 || grid.size() - 1 < x)
	{
		grid.resize(x + (size_t)1);
	}
	if (grid[x].size() == 0 || grid[x].size() - 1 < y)
	{
		for (auto& line : grid)
		{
			if (line.size() < y + 1)
			{
				line.resize(y + (size_t)1);
			}
		}
	}
	grid[x][y] = obj;
}

void OutPutConsole::print() const
{
	const int nbTitle = 1;
	for (const auto& lineGrid : grid)
	{
		for (int noLigne = 0; noLigne < Box::nbBullet + nbTitle + Box::nbBordes; noLigne++)
		{
			for (const auto& element : lineGrid)
			{
				if (element)
				{
					element->draw();
					cout << element->getDrawing()[noLigne];
				}
			}
			cout << endl;
		}
	}
}
