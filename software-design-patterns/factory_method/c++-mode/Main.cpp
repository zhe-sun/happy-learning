#include <iostream>
#include "Factory.hpp"

using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 2) {
		cout << "Need to add the Product.\n";
		return -1;
	}

	char *c = argv[1];

	Product* producta;
	Product* productb;

	FactoryA factoryA;
	FactoryB factoryB;

	switch (*c)
	{
		case 'A':
			producta = factoryA.createProduct();
			producta->create();

			delete producta;
			break;
		case 'B':
			productb = factoryB.createProduct();
			productb->create();

			delete productb;
			break;
		default:
			break;
	}

	return 0;
}

