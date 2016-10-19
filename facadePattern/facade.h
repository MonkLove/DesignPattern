#ifndef _FACADE_H_
#define _FACADE_H_

#include <iostream>
using namespace std;

class SubSystemA
{
	public :
	virtual ~SubSystemA() { }

	void operate()
	{
		cout << "System A ...\n";
	}
};

class SubSystemB
{
	public :
	virtual ~SubSystemB() { }

	void operate()
	{
		cout << "System B ...\n";
	}
};

class SubSystemC
{
	public :
	virtual ~SubSystemC() { }

	void operate()
	{
		cout << "System C ...\n";
	}
};

class Facade
{
	protected : 
	SubSystemA *sys1;
	SubSystemB *sys2;
	SubSystemC *sys3;

	public:
	Facade()
	{
		sys1 = new SubSystemA;
		sys2 = new SubSystemB;
		sys3 = new SubSystemC;
	}

	void methodA()
	{
		cout << "----------------------------" << endl;
		sys1->operate();
		sys2->operate();
	}

	void methodB()
	{
		cout << "----------------------------" << endl;
		sys1->operate();
		sys3->operate();
	}

	void methodC()
	{
		cout << "----------------------------" << endl;
		sys1->operate();
		sys2->operate();
		sys3->operate();
	}
};
#endif