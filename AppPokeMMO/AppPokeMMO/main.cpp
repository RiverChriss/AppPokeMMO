#include <iostream>
#include "TextBox.h"
#include "NullBox.h"
#include "OutPutConsole.h"
#include "VerticalSpace.h"

using namespace std;

int main()
{
	TextBox pokemon1;
	pokemon1.setTitle("Pikachu");
	pokemon1.addBullet("Att", "(28-30)");
	pokemon1.addBullet("Defence", "(31)");
	pokemon1.addBullet("Spec Defence", "(25-31)");
	pokemon1.addBullet("Spec Att", "(20-28)");

	TextBox pokemon2(pokemon1);
	pokemon2.setTitle("Charizard");
	pokemon2.getBullet(0).second = "(31)";
	pokemon2.getBullet(2).second = "(31)";
	pokemon2.getBullet(3).second = "(31)";

	cout << endl << endl;

	NullBox boxNull;

	OutPutConsole testConsole;
	testConsole.addDrawingObj(0, 0, &pokemon2);
	testConsole.addDrawingObj(0, 3, &pokemon1);
	testConsole.addDrawingObj(1, 0, &boxNull);
	testConsole.addDrawingObj(1, 1, &pokemon1);
	testConsole.addDrawingObj(0, 2, &boxNull);
	testConsole.addDrawingObj(1, 4, &boxNull);
	testConsole.print();

	return 0;
}