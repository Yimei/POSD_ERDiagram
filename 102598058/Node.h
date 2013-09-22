#include <string>
using namespace std;
#include "Component.h"
//AbstractCircle
class Node:public Component{
public:
	//Node();
	virtual void connectTo();
	virtual bool canConnectTo();
private:
	
};