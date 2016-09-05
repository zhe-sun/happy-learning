#include <iostream>
#include "Product.hpp"

using namespace std;

// AbstractProductA
AbstractProductA::AbstractProductA()
{
	cout << "The constructor AbstractProductA.\n";
}

AbstractProductA::~AbstractProductA()
{
	cout << "The destructor ~AbstractProductA.\n";
}

// ProductA1
ProductA1::ProductA1()
{
	cout << "The constructor ProductA1.\n";
}

ProductA1::~ProductA1()
{
	cout << "The destructor ~ProductA1.\n";
}

void ProductA1::operation()
{ }

// ProductA2
ProductA2::ProductA2()
{
	cout << "The constructor ProductA2.\n";
}

ProductA2::~ProductA2()
{
	cout << "The destructor ~ProductA2.\n";
}

void ProductA2::operation()
{ }

// AbstractProductB
AbstractProductB::AbstractProductB()
{
	cout << "The constructor AbstractProductB.\n";
}

AbstractProductB::~AbstractProductB()
{
	cout << "The destructor ~AbstractProductB.\n";
}

// ProductB1
ProductB1::ProductB1()
{
	cout << "The constructor ProductB1.\n";
}

ProductB1::~ProductB1()
{
	cout << "The destructor ~ProductB1.\n";
}

void ProductB1::operation()
{ }

// ProductB2
ProductB2::ProductB2()
{
	cout << "The constructor ProductB2.\n";
}

ProductB2::~ProductB2()
{
	cout << "The destructor ~ProductB2.\n";
}

void ProductB2::operation()
{ }






