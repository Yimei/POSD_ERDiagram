#include <string>
#include <iostream>
#include "Component.h"
using namespace std;

int _id;
int _type;
string _text;
Component::Component(int id, int type, string text){
	_id = id;
	_type = type;
	_text = text;
}
int Component::getID(){
	return _id;
}
int Component::getType(){
	return _type;
}
string Component::getText(){
	return _text;
}
void Component::connectTo(){

}
void Component::canConnectTo(){

}


