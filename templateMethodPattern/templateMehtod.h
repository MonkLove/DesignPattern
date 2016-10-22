#ifndef _TEMPLATEMETHOD_H_
#define _TEMPLATEMETHOD_H_
#include <iostream>
using namespace std;

class TemplateMethod
{
	protected:
	virtual void primitiveOperateA() = 0;
	virtual void primitiveOperateB() = 0;
	virtual void primitiveOperateC() = 0;

	public:
	virtual ~TemplateMethod() { }

	void templateMethod()
	{
		this->primitiveOperateA();
		this->primitiveOperateC();
		this->primitiveOperateB();
	}
};

class ConcreteMethodA : public TemplateMethod
{
	protected:
	virtual void primitiveOperateA()
	{
		cout << "method a ... \n";
	}
	virtual void primitiveOperateB()
	{
		cout << "method b ... \n";
	}
	virtual void primitiveOperateC()
	{
		cout << "method c ...\n";
	}
};

class ConcreteMethodB : public TemplateMethod
{
	protected:
	virtual void primitiveOperateA()
	{
		cout << "method 1 ...\n";
	}
	virtual void primitiveOperateB()
	{
		cout << "method 2 ... \n";
	}
	virtual void primitiveOperateC()
	{
		cout << "method 3 ...\n";
	}
};
#endif