#include <string>
#include <iostream>
#include "Component.h"
using namespace std;

int _id;
string _type;
string _text;
Component::Component(){
	_id = id;
	_type = type;
	_text = text;
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
	//給下下層實作
}
bool Component::canConnectTo(){
	//給下下層實作
	return true; //test
}


