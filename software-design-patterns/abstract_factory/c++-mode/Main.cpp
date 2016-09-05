#include <iostream>
#include "Factory.hpp"
#include "Product.hpp"

using namespace std;

int main()
{
	AbstractFactory* fa1 = new ConcreteFactory1();
	cout << "\n";
	AbstractProductA* a1 = fa1->CreateProductA();
	cout << endl;
	AbstractProductB* b1 = fa1->CreateProductB();

	cout << "\n";

	AbstractFactory* fa2 = new ConcreteFactory2();
	cout << "\n";
	AbstractProductA* a2 = fa2->CreateProductA();
	cout << "\n";
	AbstractProductB* b2 = fa2->CreateProductB();

	cout << "\n";

	delete fa1;
	cout << "\n";
	delete a1;
	cout << "\n";
	delete b1;

	cout << "\n";

	delete fa2;
	cout << "\n";
	delete a2;
	cout << "\n";
	delete b2;

	return 0;
}



