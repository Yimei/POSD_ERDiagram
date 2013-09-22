#include <string>
#include "Component.h"
using namespace std;
class Connector:public Component{
public:
	Connector();
	void connectTo();
	bool canConnectTo();
private:
	int connections;
};