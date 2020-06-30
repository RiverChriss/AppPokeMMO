#include "TextBox.h"

using namespace std;

void TextBox::setTitle(const string& text)
{
	title = text;
}

void TextBox::addBullet(const string& textLeft, const string& textRight)
{
    if (bullet.size() >= nbBullet)
    {
        return;
    }
 
    bullet.push_back(pair<string, string>(textLeft.substr(0, nbCharBullet), textRight.substr(0, nbCharVal)));
}

pair<string, string>& TextBox::getBullet(size_t index)
{
    return bullet[index];
}

void TextBox::draw()
{
    drawing.clear();

    int widthBox = nbCharBullet + nbCharVal + nbBordes;

    drawing.push_back(string(widthBox, '_'));
    drawing.push_back("|" + title + string(widthBox - title.length() - 2, ' ') + "|");
    drawing.push_back(string(widthBox, '-'));

    for (const auto& line : bullet)
    {
        string white1(nbCharBullet - line.first.length(), ' ');
        string white2(nbCharVal - line.second.length(), ' ');
        drawing.push_back("|" + line.first + white1 + "|" + white2 + line.second + "|");
    }
    for (size_t i = 0; i < nbBullet - bullet.size(); i++)
    {
        drawing.push_back("|" + string(nbCharBullet, ' ') + "|" + string(nbCharVal, ' ') + "|");
    }
    drawing.push_back(string(widthBox, '_'));
}
