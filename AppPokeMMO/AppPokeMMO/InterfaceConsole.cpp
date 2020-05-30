#include "InterfaceConsole.h"

void InterfaceConsole::addDrawingObj(int x, int y, DrawingObj* obj)
{
	if (grille.size() == 0 || grille.size() - 1 < x)
	{
		grille.resize(x + 1);
	}
	if (grille[x].size() == 0 || grille[x].size() - 1 < y)
	{
		for (auto& ligne : grille)
		{
			ligne.resize(y + 1);
		}
	}
	grille[x][y] = obj;
}
