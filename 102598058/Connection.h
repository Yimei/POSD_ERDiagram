#include <string>
using namespace std;

class Connection{
public:
	Connection();
	void connectTo();
	void canConnectTo();
private:
	int connections;
};