#pragma once
#include <vector>
#include <string>

using namespace std;

class DrawingObj
{
protected:
	vector<string> dessin;
	virtual void draw() = 0;

public:
	void print();
	const vector<string>& getDessin() const;
};



