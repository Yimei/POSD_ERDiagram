#include <string>
using namespace std;
#include "Node.h"

class Entity: public Node{
public:
	void connectTo();
	void canConnectTo();
private:
	int connections;


};