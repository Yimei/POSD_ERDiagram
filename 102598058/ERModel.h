#include <string>
using namespace std;

class ERModel{
public:
	ERModel();
	void addNode(char);
	void addConnection();
	void checkType(int);
	void getTable();
private:
	int _answer;
	char _type;
};