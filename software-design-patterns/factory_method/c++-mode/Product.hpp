#ifndef _PRODUCT_HPP_
#define _PRODUCT_HPP_

#include <iostream>

using namespace std;

class Product {
public:
	virtual void create() = 0;
};

// Product A
class ProductA : public Product {
public:
	void create() {
		cout << "Create Product A.\n";
	}
};

// Product B
class ProductB : public Product {
public:
	void create() {
		cout << "Create Product B.\n";
	}
};

#endif


