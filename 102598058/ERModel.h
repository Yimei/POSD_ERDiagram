#include <string>
#include "Component.h"
using namespace std;


class ERModel{
public:
	
	void addNode(string);
	void addConnection();
	
	void getTable();
private:
	Component components;
	int _answer;
	string _type;
};