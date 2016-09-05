

// Abstract base class A
class AbstractProductA 
{
public:
	virtual ~AbstractProductA()=0;
	virtual void operation()=0;

protected:
	AbstractProductA();
};

// Derived Class A1, inherited from `AbstractProductA`
class ProductA1 : public AbstractProductA
{
public:
	ProductA1();
	virtual void operation();
	virtual ~ProductA1();
};

// Derived Class A2, inherited from `AbstractProductA`
class ProductA2 : public AbstractProductA
{
	public:
		ProductA2();
		virtual void operation();
		virtual ~ProductA2();
};

// Abstract base class B
class AbstractProductB
{
public:
	virtual ~AbstractProductB()=0;
	virtual void operation()=0;

protected:
	AbstractProductB();
};

// Derived Class B1, inherited from `AbstractProductB`
class ProductB1 : public AbstractProductB
{
public:
	ProductB1();
	virtual void operation();
	virtual ~ProductB1();
};

// Derived Class B2, inherited from `AbstractProductB`
class ProductB2 : public AbstractProductB
{
	public:
		ProductB2();
		virtual void operation();
		virtual ~ProductB2();
};





