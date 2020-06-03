#include "NullBox.h"

using namespace std;

void NullBox::draw()
{
	int widthBox = nbCharPuce + nbCharVal + 3;
	int heightBox = nbPuce + 4;

	drawing.clear();

	for (size_t i = 0; i < heightBox; i++)
	{
		drawing.push_back(string(widthBox, ':'));
	}
}

