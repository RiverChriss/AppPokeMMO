#pragma once
#include <vector>
#include "DrawingObj.h"
#include <string>
#include <iostream>

using namespace std;

class OutPutConsole
{
private:
	vector<vector<DrawingObj*>> grille;
	vector<string> drawing;

public:
	void addDrawingObj(int x, int y, DrawingObj* obj);
	void print() const;
};

