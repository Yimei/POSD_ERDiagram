
#include <QtCore/QCoreApplication>
#include <iostream>
#include <TextUI.h>

using namespace std;

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	
	TextUI textUI;
	//cout << "Hello! World!\n";
	//cout << "«¢Åo! C++!\n";
	textUI.displayMenu();

	return a.exec();
}
