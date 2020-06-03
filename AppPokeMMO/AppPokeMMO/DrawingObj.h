#pragma once
#include <vector>
#include <string>

using namespace std;

class DrawingObj
{
protected:
	vector<string> drawing;

public:
	void print();
	const vector<string>& getDrawing() const;
	virtual void draw() = 0;
};



