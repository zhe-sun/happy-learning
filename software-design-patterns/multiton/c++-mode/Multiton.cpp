#include "Multiton.hpp"
#include <iostream>

int main()
{
	class Foo : public Multiton<Foo, std::string>{};
	Foo &foo = Foo::getRef("foobar");

	Foo::destroyAll();

	return 0;
}

