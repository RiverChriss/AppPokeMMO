#pragma once
#include "Box.h"
#include <string>
#include <vector>

using namespace std;

class TextBox : public Box
{
private:
    string title;
    vector<pair<string, string>> puce;

protected:
    virtual void draw();

public:
    void setTitle(const string& text);
    void addPuce(string textLeft, string textRight);
    pair<string, string>& getPuce(int index);
};

