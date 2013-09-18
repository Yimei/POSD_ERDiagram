#include <string>
using namespace std;
#include "Component.h"

class Connection:public Component{
public:
	Connection();
	void connectTo();
	bool canConnectTo();
private:
	int connections;
};