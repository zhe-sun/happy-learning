#include <iostream>
#include "Factory.hpp"
#include "Product.hpp"

using namespace std;

// AbstractFactory
AbstractFactory::AbstractFactory()
{
	cout << "The constructor AbstractFactory.\n";
}

AbstractFactory::~AbstractFactory()
{
	cout << "The destructor ~AbstractFactory.\n";
}

// ConcreteFactory1
ConcreteFactory1::ConcreteFactory1()
{
	cout << "The constructor ConcreteFactory1.\n";
}

ConcreteFactory1::~ConcreteFactory1()
{
	cout << "The destructor ~ConcreteFactory1.\n";
}

AbstractProductA* ConcreteFactory1::CreateProductA()
{
	return new ProductA1();
}

AbstractProductB* ConcreteFactory1::CreateProductB()
{
	return new ProductB1();
}

// ConcreteFactory2
ConcreteFactory2::ConcreteFactory2()
{
	cout << "The constructor ConcreteFactory2.\n";
}

ConcreteFactory2::~ConcreteFactory2()
{
	cout << "The destructor ~ConcreteFactory2.\n";
}

AbstractProductA* ConcreteFactory2::CreateProductA()
{
	return new ProductA2();
}

AbstractProductB* ConcreteFactory2::CreateProductB()
{
	return new ProductB2();
}



