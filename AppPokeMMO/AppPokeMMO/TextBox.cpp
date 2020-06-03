#include "TextBox.h"

using namespace std;

void TextBox::setTitle(const string& text)
{
	title = text;
}

void TextBox::addPuce(string textLeft, string textRight)
{
    if (puce.size() >= nbPuce)
    {
        return;
    }
    if (textLeft.length() > nbCharPuce)
    {
        textLeft = textLeft.substr(0, nbCharPuce);
    }
    if (textRight.length() > nbCharVal)
    {
        textRight = textRight.substr(0, nbCharVal);
    }
    puce.push_back(pair<string, string>(textLeft, textRight));
}

pair<string, string>& TextBox::getPuce(int index)
{
    return puce[index];
}

void TextBox::draw()
{
    drawing.clear();

    int widthBox = nbCharPuce + nbCharVal + 3;

    drawing.push_back(string(widthBox, '_'));
    drawing.push_back("|" + title + string(widthBox - title.length() - 2, ' ') + "|");
    drawing.push_back(string(widthBox, '-'));

    for (auto line : puce)
    {
        string white1(nbCharPuce - line.first.length(), ' ');
        string white2(nbCharVal - line.second.length(), ' ');
        drawing.push_back("|" + line.first + white1 + "|" + white2 + line.second + "|");
    }
    for (size_t i = 0; i < nbPuce - puce.size(); i++)
    {
        drawing.push_back("|" + string(nbCharPuce, ' ') + "|" + string(nbCharVal, ' ') + "|");
    }
    drawing.push_back(string(widthBox, '_'));
}
