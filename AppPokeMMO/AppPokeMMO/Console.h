#pragma once
#include <vector>
#include "DrawingObj.h"

using namespace std;

class Console
{
private:
	vector<vector<DrawingObj>> grille;
public:
	void addDrawingObj(int x, int y, DrawingObj obj)
	{
		if (grille.size()-1 < x)
		{
			grille.resize(x);
		}
		if (grille[x].size()-1 < y)
		{
			for (auto ligne : grille)
			{
				ligne.resize(y);
			}
		}
	}

};

