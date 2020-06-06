#include "DrawingObj.h"
#include <iostream>

using namespace std;

void DrawingObj::print()
{
	draw();

	for (const string& line : drawing)
	{
		cout << line << endl;
	}
}

const vector<string>& DrawingObj::getDrawing() const
{	
	return drawing;
}
