#include "VideBox.h"

void VideBox::draw()
{
	int largeurBox = nbCharPuce + nbCharVal + 3;
	int hauteurBox = nbPuce + 4;
	for (size_t i = 0; i < hauteurBox; i++)
	{
		dessin.push_back(string(largeurBox, ':'));
	}
}
