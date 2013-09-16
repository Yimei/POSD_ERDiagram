#include <string>
#include <iostream>
#include "ERModel.h"
#include "TextUI.h"
#define MENU_ONE "1. Add a node\n";
#define MENU_TWO "2. Connect two nodes\n";
#define MENU_THREE "3. Display the current diagram\n";
#define MENU_FOUR "4. Set a primary key\n";
#define MENU_FIVE "5. Display the table\n";
#define MENU_SIX "6. Exit\n> ";
#define WKONDYWTA "What kind of node do you want to add?\n[A]Attribute [E]Entity [R]Relation\n> ";
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
	processCommand();
}
void TextUI::processCommand(){
	ERModel ermodel;
	char _type;
	int _idFirst;
	int _idSecond;
	/*int _command;
	int _answer;
	char _type;*/
	cin >> _command;

	switch(_command){
	case 1:
		cout << "What kind of node do you want to add?\n[A]Attribute [E]Entity [R]Relation\n> ";
		cin >> _type;
		//ermodel.checkType(_type);
		ermodel.addNode(_type);
		break;
	case 2:
		cout << "Please enter the first node ID";
		cin >> _idFirst;
		cout << "Please enter the second node ID";
		cin >> _idSecond;
		ermodel.addConnection();
	case 3:
		cout << "The ER diagram is displayed as follows: ";
		ermodel.getTable();
	case 4:

		break;
	case 5:

		break;
	case 6:
		
		break;
	default:
		;

	
	}

	//cin >> _answer;

}




