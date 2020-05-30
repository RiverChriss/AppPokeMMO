#include "TextBox.h"

void TextBox::setTitre(const string& texte)
{
	titre = texte;
}

void TextBox::addPuce(string textGauche, string textDroite)
{
    if (puce.size() >= nbPuce)
    {
        return;
    }
    if (textGauche.length() > nbCharPuce)
    {
        textGauche = textGauche.substr(0, nbCharPuce);
    }
    if (textDroite.length() > nbCharVal)
    {
        textDroite = textDroite.substr(0, nbCharVal);
    }
    puce.push_back(pair<string, string>(textGauche, textDroite));
}

pair<string, string>& TextBox::getPuce(int index)
{
    return puce[index];
}

void TextBox::draw()
{
    int largeurBox = nbCharPuce + nbCharVal + 3;

    dessin.push_back(string(largeurBox, '_'));
    dessin.push_back("|" + titre + string(largeurBox - titre.length() - 2, ' ') + "|");
    dessin.push_back(string(largeurBox, '-'));

    for (auto ligne : puce)
    {
        string white1(nbCharPuce - ligne.first.length(), ' ');
        string white2(nbCharVal - ligne.second.length(), ' ');
        dessin.push_back("|" + ligne.first + white1 + "|" + white2 + ligne.second + "|");
    }
    dessin.push_back(string(largeurBox, '_'));
}
