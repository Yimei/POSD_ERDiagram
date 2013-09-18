#include <string>
#include "Component.h"
using namespace std;

class ComponentFactory{
public:
	//ComponentFactory();
	//virtual Component ComponentFactory(int);
	virtual Component* createComponent(string);
private:
	string type;
};