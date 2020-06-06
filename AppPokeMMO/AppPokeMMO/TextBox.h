#pragma once
#include "Box.h"
#include <string>
#include <vector>

using namespace std;

class TextBox : public Box
{
private:
    string title;
    vector<pair<string, string>> bullet;  

public:
    void setTitle(const string& text);
    void addBullet(const string& textLeft, const string& textRight);
    pair<string, string>& getBullet(size_t index);
    virtual void draw() override;
};

