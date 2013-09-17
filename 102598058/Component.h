#include <string>
using namespace std;

class Component{
public:
	
	Component();
	int getID();
	int getType();
	string getText();
	virtual void connectTo();
	virtual void canConnectTo();
private:
	
	int id;
	int type;
	string text;
};
//Abstract Factory returning a component
//class ComponentFactory{
//public:
//	Component* createComponent();
//};


