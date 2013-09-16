#include <string>
using namespace std;

class Entity{
public:
	Entity();
	void connectTo();
	void canConnectTo();
private:
	int connections;


};