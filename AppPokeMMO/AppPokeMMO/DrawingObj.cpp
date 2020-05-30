#include "DrawingObj.h"
#include <iostream>

using namespace std;

void DrawingObj::print()
{
	draw();

	for (string ligne : dessin)
	{
		cout << ligne << endl;
	}
}

const vector<string>& DrawingObj::getDessin() const
{
	return dessin;
}
