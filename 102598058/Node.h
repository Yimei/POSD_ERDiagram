#include <string>
using namespace std;
#include "Component.h"
//AbstractCircle
class Node:public Component{
public:
	//Node();
	virtual void connectTo();
	virtual void canConnectTo();
private:
	int connections;
};