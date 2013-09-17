#include <string>
using namespace std;
#include "Node.h"
class Attribute:public Node{
public:
	
	virtual void connectTo();
	virtual void canConnectTo();
private:
	int connections;
};