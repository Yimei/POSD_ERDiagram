#include <string>
using namespace std;
#include "Node.h"
class Attribute:public Node{
public:
	
	virtual void connectTo();
	virtual bool canConnectTo();
private:
	int connections;
};