#include <string>
#include <iostream>
#include"ComponentFactory.h"
#include "Component.h"
using namespace std;
static enum StringValue {
	Entity,
	Attribute,
	Relationship
};
Component* ComponentFactory::*createComponent(int type){

	switch(type){
	case 1:
		 
		break;
	case 2:

		break;
	case 3:

		break;
	}
	return NULL;
}