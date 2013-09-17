#include <string>
using namespace std;
#include "Component.h"

class Connection:public Component{
public:
	Connection();
	void connectTo();
	void canConnectTo();
private:
	int connections;
};