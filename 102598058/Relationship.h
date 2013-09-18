#include <string>
using namespace std;
#include "Node.h"
class Relationship:public Node{
public:
	
	virtual void connectTo();//¤¶­±
	virtual bool canConnectTo();//¤¶­±
private:
	int connections;
};