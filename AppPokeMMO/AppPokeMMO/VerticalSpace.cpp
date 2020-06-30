#include "VerticalSpace.h"

using namespace std;

void VerticalSpace::draw()
{
	// TODO:: the function is not implemented, it is just code for testing
	const int heightBox = 3;
	for (size_t i = 0; i < heightBox; i++)
	{
		drawing.push_back(string(1, '\t') + "|");
	}
}
