#ifndef _FACTORY_HPP_
#define _FACTORY_HPP_

#include "Product.hpp"

class Factory {
public:
	virtual Product* createProduct() = 0;				
};

// The Factory of creating Product A 
class FactoryA : public Factory {
public:
	Product* createProduct() {
		return new ProductA();
	}
};

// The Factory of creating Product B 
class FactoryB : public Factory {
public:
	Product* createProduct() {
		return new ProductB();
	}
};

#endif


