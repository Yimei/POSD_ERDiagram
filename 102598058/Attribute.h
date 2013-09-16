#include <string>
using namespace std;

class Attribute{
public:
	Attribute();
	void connectTo();
	void canConnectTo();
private:
	int connections;
};