#pragma once
#include "Box.h"
#include <string>
#include <vector>

using namespace std;

class TextBox : public Box
{
private:
    string titre;
    vector<pair<string, string>> puce;

protected:
    virtual void draw();

public:
    void setTitre(const string& texte);
    void addPuce(string textGauche, string textDroite);
    pair<string, string>& getPuce(int index);
};

