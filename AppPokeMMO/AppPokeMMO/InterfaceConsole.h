#pragma once
#include <vector>
#include "DrawingObj.h"
#include <string>
#include <iostream>

using namespace std;

class InterfaceConsole
{
private:
	vector<vector<DrawingObj*>> grille;
	vector<string> dessin;

public:
	void addDrawingObj(int x, int y, DrawingObj* obj);
	void print() const
	{
		for (const auto& ligne : grille)
		{
			size_t index = 0;
	debutLigne:
			size_t hauteurMax = 0;
			for (const auto& element : ligne)
			{
				if (element)
				{
					if (element->getDessin().size() > hauteurMax)
					{
						hauteurMax = element->getDessin().size();
					}
					cout << element->getDessin()[index];
				}
				
			}
			cout << endl;
			index++;
			if (index < hauteurMax)
			{
				goto debutLigne; // TODO: trouver une façon de retirer le goto
			}
		}
	}
};

