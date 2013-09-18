#include <iostream>
#include "ERModel.h"


using namespace std;
ERModel::ERModel(){
	
}
//struct Type
//{
//	int Entity;
//	int Attribute;
//	int Relationship;
//};
void ERModel::addNode(string type){
	//components = new Component();
	//Component component;
	string _name;
	//int _answer;
	string _type = type;
	int _id = 0;
	cout << "type: " << type <<"\n";

	for (int i = 0 ;(_type != "A")&& (_type != "E")&& (_type != "R") ; i++){
		cout << "You entered an invalid node. Please enter a valid one again.\n[A]Attribute [E]Entity [R]Relation\n> ";
		cin >> _type;
		//system("pause");
	}
	
	cout << "Enter the name of this node:\n";
	cin >> _name;
	_id++;
	cout << "A node" << "[" << "KJL" << "] has been added. ID: " << _id<<", Name: ""\" <<_name<<""\"";
		
		
}
void ERModel::checkType(int type){
	cout << type;
	if (type == 'A' || type == 'E'|| type == 'R')
		_answer = 1;
	else
		_answer = 0;
}
void ERModel::addConnection(){

}
void ERModel::getTable(){

}


