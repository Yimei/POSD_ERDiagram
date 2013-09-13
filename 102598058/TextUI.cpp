#include <string>
#include <iostream>

#include "TextUI.h"
#define MENU_ONE "1. Add a node\n";
#define MENU_TWO "2. Connect two nodes\n";
#define MENU_THREE "3. Display the current diagram\n";
#define MENU_FOUR "4. Set a primary key\n";
#define MENU_FIVE "5. Display the table\n";
#define MENU_SIX "6. Exit\n>";

using namespace std;


TextUI::TextUI(){

}
void TextUI::displayMenu(){

	cout << MENU_ONE ;
	cout << MENU_TWO ;
	cout << MENU_THREE ;
	cout << MENU_FOUR ;
	cout << MENU_FIVE ;
	cout << MENU_SIX;
	
}
void TextUI::processCommand(){

	int _command;
	cin >> _command;

	switch(_command){
	
	case 1:
		//cout << 
	}
}




