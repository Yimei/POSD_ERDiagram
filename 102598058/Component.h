#include <string>
using namespace std;

class Component{
public:
	Component(int id, int type, string text);
	int getID();
	int getType();
	string getText();
	void connectTo();
	void canConnectTo();
private:
	int id;
	int type;
	string text;
};