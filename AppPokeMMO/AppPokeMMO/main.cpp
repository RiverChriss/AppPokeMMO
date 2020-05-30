#include <iostream>
#include <string>
#include "TextBox.h"
#include "VideBox.h"
#include "InterfaceConsole.h"

using namespace std;

int main()
{
	TextBox test1;
	test1.setTitre("Pokemon");
	test1.addPuce("Att", "(28-30)");
	test1.addPuce("Defence", "(31)");
	test1.addPuce("Spec Defence", "(25-31)");
	test1.addPuce("Spec Att", "(20-28)");
	test1.print();


	VideBox test2;
	test2.print();

	cout << endl << endl;

	InterfaceConsole testConsole;
	testConsole.addDrawingObj(1, 0, &test1);
	testConsole.addDrawingObj(0, 0, &test2);
	testConsole.addDrawingObj(1, 1, &test2);
	testConsole.addDrawingObj(0, 3, &test1);
	testConsole.addDrawingObj(0, 2, &test2);
	testConsole.print();

	return 0;
}