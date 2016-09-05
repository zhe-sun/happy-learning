#include <iostream>
#include "Prototype.hpp"

using namespace std;

int main()
{
	ObjectFactory::initialize();
	Prototype *object;

	//All the object were created by cloning the prototypes.
	object = ObjectFactory::getType1Value1();
	cout << object->getType() << ": " << object->getValue() << "\n";

	object = ObjectFactory::getType1Value2();
	cout << object->getType() << ": " << object->getValue() << "\n";

	object = ObjectFactory::getType2Value1();
	cout << object->getType() << ": " << object->getValue() << "\n";
	
	object = ObjectFactory::getType2Value2();
	cout << object->getType() << ": " << object->getValue() << "\n";

	return 0;
}



