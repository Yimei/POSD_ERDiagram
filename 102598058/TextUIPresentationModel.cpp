#include <string>
#include <iostream>
#include "TextUIPresentationModel.h"
#include "ERModel.h"
using namespace std;

TextUIPresentationModel::TextUIPresentationModel(){

}
void TextUIPresentationModel::checkAnswer(string type){
	string _type = type;
	string _name;
	int _id = 0;
	ERModel ermodel;
	for (int i = 0 ;(_type != "A")&& (_type != "E")&& (_type != "R") ; i++){
		cout << "You entered an invalid node. Please enter a valid one again.\n[A]Attribute [E]Entity [R]Relation" << endl << "> ";
		cin >> _type;
		//system("pause");
	}
	cout << "Enter the name of this node:"<< endl;
	cin >> _name;
	cout << "A node" << "[" << "KJL" << "] has been added. ID: " << _id<<", Name: ""\"" <<_name<<"\"";
	_id++;	
	ermodel.addNode(_type);
}

