#include "OutPutConsole.h"

using namespace std;

void OutPutConsole::addDrawingObj(int x, int y, DrawingObj* obj)
{
	if (grille.size() == 0 || grille.size() - 1 < x)
	{
		grille.resize(x + 1);
	}
	if (grille[x].size() == 0 || grille[x].size() - 1 < y)
	{
		for (auto& line : grille)
		{
			line.resize(y + 1);
		}
	}
	grille[x][y] = obj;
}

void OutPutConsole::print() const
{
	for (const auto& line : grille)
	{
		size_t index = 0;
	startLine:
		size_t heightMax = 0;
		for (const auto& element : line)
		{
			if (element)
			{
				element->draw();
				if (element->getDrawing().size() > heightMax)
				{
					heightMax = element->getDrawing().size();
				}
				cout << element->getDrawing()[index];
			}

		}
		cout << endl;
		index++;
		if (index < heightMax)
		{
			goto startLine; // TODO: trouver une façon de retirer le goto
		}
	}
}
