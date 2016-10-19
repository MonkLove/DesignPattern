#ifndef _DECORATOR_H_
#define _DECORATOR_H_
#include <iostream>
using namespace std;

class VirtualGirl
{
	public :
	virtual ~VirtualGirl() { }

	virtual void makeup() = 0;
};

class ConcreteGirl : public VirtualGirl
{
	public :
	virtual ~ConcreteGirl() { }

	virtual void makeup()
	{
		cout << "dress up";
	}
};

class Decorator
{
	private : 
	ConcreteGirl *girl;

	public:
	virtual ~Decorator() { }
	Decorator(ConcreteGirl *gl) : girl(gl) { }

	void makeup()
	{
		girl->makeup();
	}
};

class ConcreteDecorator : public Decorator
{
	public :
	ConcreteDecorator(ConcreteGirl *gl) : Decorator(gl) { }

	void addBehavior()
	{
		cout << "add behavior ...\n";
	}
};
#endif