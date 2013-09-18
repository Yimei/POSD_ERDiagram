#include <string>
using namespace std;
#include "Node.h"

class Entity: public Node{
public:
	void connectTo();
	bool canConnectTo();
private:
	int connections;


};