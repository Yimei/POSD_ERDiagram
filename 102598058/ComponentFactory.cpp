#include <string>
#include <iostream>
#include"ComponentFactory.h"
#include "Component.h"
using namespace std;
enum  NodeKind{
	Entity,
	Attribute,
	Relationship
};
ComponentFactory::ComponentFactory(){

}
Component ComponentFactory::createComponent(string type){
	enum NodeKind notekind;
	switch(notekind){
	case 1:
		// return new Component();
		break;
	case 2:


		break;
	case 3:

		break;
	}
	return NULL;
}