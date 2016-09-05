#include <iostream>

class Singleton
{
private:
	// The instance stored
	static Singleton *instance;

	// Private constructor to prevent instancing
	Singleton();

public:
	// Static access method
	static Singleton *getInstance();
};

// Null, because instance will be initialized on demand
Singleton *Singleton::instance = 0;

Singleton *Singleton::getInstance()
{
	if (0 == instance) 
		instance = new Singleton();

	return instance;
}

Singleton::Singleton(){}

int main()
{
	// new Singleton(), won't work
	Singleton *s = Singleton::getInstance();
	Singleton *r = Singleton::getInstance();

	// the address will be the same
	std::cout << s << "\n";
	std::cout << r << "\n";

	return 0;
}

