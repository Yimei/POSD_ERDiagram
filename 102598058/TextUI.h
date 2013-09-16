#include <string>

using namespace std;

class TextUI{
public:
	TextUI();
	void displayMenu();
	void processCommand();
private:
	int _command;
	int _answer;
	char _type;
};
