#include <string>
#include "Component.h"
using namespace std;


class ERModel{
public:
	ERModel();
	void addNode(string);
	void addConnection();
	void checkType(int);
	void getTable();
private:
	Component components;
	int _answer;
	char _type;
};