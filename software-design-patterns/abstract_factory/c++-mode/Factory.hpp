// AbstractFactory base class, define the interface to create A and B.
class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
	virtual ~AbstractFactory() = 0;
	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductB* CreateProductB() = 0;

protected:
	AbstractFactory();
};

// Derived Class, inherited from `AbstractFactory`
class ConcreteFactory1 : public AbstractFactory
{
public:
	ConcreteFactory1();
	~ConcreteFactory1();
	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

// Derived Class, inherited from `AbstractFactory`
class ConcreteFactory2 : public AbstractFactory
{
public:
	ConcreteFactory2();
	~ConcreteFactory2();
	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};


