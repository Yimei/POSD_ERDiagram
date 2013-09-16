#include <string>
using namespace std;

class Node{
public:
	Node();
	void connectTo();
	void canConnectTo();
private:
	int connections;
};