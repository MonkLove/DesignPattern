#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_
#include <string>
#include <iostream>
using namespace std;

class Prototype
{

	public:
	virtual ~Prototype() {}

	virtual Prototype* clone() = 0;
};

class ConcreteObjectA : public Prototype
{
	private:
	ConcreteObjectA* wiseClone()
	{
		return this;
	}
	
	public:	
	virtual ~ConcreteObjectA() {}
	ConcreteObjectA() 
	{
		cout << "Obj A created ...\n";
	}
	ConcreteObjectA(ConcreteObjectA *obj)
	{
		cout << "Obj A copy ...\n";
	}
	virtual Prototype* clone()
	{
		return new ConcreteObjectA(this);
	}
};

class ConcreteObjectB : public Prototype
{
	private:
	ConcreteObjectB* wiseClone()
	{
		return this;
	}
	
	public:	
	virtual ~ConcreteObjectB() {}
	ConcreteObjectB() 
	{
		cout << "Obj A created ...\n";
	}
	ConcreteObjectB(ConcreteObjectB *obj)
	{
		cout << "Obj A copy ...\n";
	}
	virtual Prototype* clone()
	{
		return new ConcreteObjectB(this);
	}
};

#endif