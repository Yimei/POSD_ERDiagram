#include <string>
#include "Component.h"
using namespace std;

class ComponentFactory{
public:
	//ComponentFactory();
	static Component* ComponentFactory();
	static Component createComponent();
private:

};