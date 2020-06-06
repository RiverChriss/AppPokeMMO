#pragma once
#include <vector>
#include "DrawingObj.h"
#include <string>
#include <iostream>
#include "Box.h"

using namespace std;

class OutPutConsole
{
private:
	vector<vector<DrawingObj*>> grid;
	vector<string> drawing;

public:
	void addDrawingObj(size_t x, size_t y, DrawingObj* obj);
	void print() const;
};

