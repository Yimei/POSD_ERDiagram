#include <string>
#include <iostream>
#include "Component.h"
using namespace std;

int _id;
string _type;
string _text;
Component::Component(){
	/*_id = id;
	_type = type;
	_text = text;*/
}
void Component::setName(string name){
	_text = name;
}

int Component::getID(){
	return _id;
}
string Component::getType(){
	return _type;
}
string Component::getText(){
	return _text;
}
void Component::connectTo(){
	//���U�U�h��@
}
bool Component::canConnectTo(){
	//���U�U�h��@
	return true; //test
}


