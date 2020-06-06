#include "NullBox.h"

using namespace std;

void NullBox::draw()
{						
	const int nbTitle = 1;
	int widthBox = nbCharBullet + nbCharVal + nbBordes;
	int heightBox = nbBullet + nbTitle + nbBordes;

	drawing.clear();

	for (size_t i = 0; i < heightBox; i++)
	{
		drawing.push_back(string(widthBox, ':'));
	}
}

