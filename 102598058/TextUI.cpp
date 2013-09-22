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
enum Type{
	 A, a, E, e, R, r
};
void TextUI::displayMenu(){
	cout << MENU_ONE;
	cout << MENU_TWO;
	cout << MENU_THREE;
	cout << MENU_FOUR;
	cout << MENU_FIVE;
	cout << MENU_SIX;
	processCommand();
}
void TextUI::processCommand(){
	ERModel ermodel;
	string _type;
	string _name;
	enum Type _typeChangeToNum;
	string _typeName;
	int _id=0;
	int _firstNode;
	int _secondNode;
	
	cin >> _command;

	switch(_command){
	case 1:
		cout << "What kind of node do you want to add?\n[A]Attribute [E]Entity [R]Relation\n> ";
		cin >> _type;
		while ((_type != "A")||(_type != "E")||(_type != "R")||(_type != "a")||(_type != "e")||(_type != "r")){
			cout << "You entered an invalid node. Please enter a valid one again.\n[A]Attribute [E]Entity [R]Relation" << endl << "> ";
			cin >> _type;
		}
		cout << "Enter the name of this node: " << endl << "> ";
		cin >> _name;

		switch (_typeChangeToNum){
		case 1:
			_typeName = "Attribute";
			break;
		case 2:
			_typeName = "Attribute";
			break;
		case 3:
			_typeName = "Entity";
			break;
		case 4:
			_typeName = "Entity";
			break;
		case 5:
			_typeName = "Relation";
			break;
		case 6:
			_typeName = "Relation";
			break;
		default:
			_typeName = "None";
		}		
		
		cout << "A node [" << _typeName << "]" << "has been added. ID: " << _id << ", Name: " << _name << endl;
		cout << "Components:" << endl;
		cout << "----------+--------------+----------------" << endl;
		cout << "Type" << "|" << "ID" << "|" << "Name" << endl;
		cout << "----------+--------------+----------------" << endl;
		cout << _typeName << "\t|\t" << _id << "\t|\t" << _name << endl; 
		_id++;
		//ermodel.addNode(_type);

		break;

	case 2:
		cout << "Please enter the first node ID";
		cin >> _firstNode;
		cout << "Please enter the second node ID";
		cin >> _secondNode;
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




