#include <string>
using namespace std;

class Component{
public:
	
	Component();
	int getID();
	string getType();
	string getText();
	virtual void connectTo();
	virtual bool canConnectTo();
private:
	
	int id;
	string type;
	string text;
};
//Abstract Factory returning a component
//class ComponentFactory{
//public:
//	Component* createComponent();
//};


