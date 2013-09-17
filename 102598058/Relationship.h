#include <string>
using namespace std;
#include "Node.h"
class Relationship:public Node{
public:
	
	virtual void connectTo();//¤¶­±
	virtual void canConnectTo();//¤¶­±
private:
	int connections;
};