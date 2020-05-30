#pragma once
#include "DrawingObj.h"
class EspaceVertical : public DrawingObj
{
protected:
	virtual void draw()
	{
		int hauteurBox = 3;
		for (size_t i = 0; i < hauteurBox; i++)
		{
			dessin.push_back(string(1, '\t') + "|");
		}
	}
};

