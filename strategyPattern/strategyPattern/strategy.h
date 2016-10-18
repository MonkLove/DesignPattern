#ifndef _STRATEGY_H_
#define _STRATEGY_H_

#include <iostream>
using namespace std;

class Strategy
{
	public:
	virtual ~Strategy() {}

	virtual void showStrategy() = 0;
};

class ConcreteStrategyA : public Strategy
{
	public :
	virtual ~ConcreteStrategyA( ) {}

	virtual void showStrategy()
	{
		cout << "Strategy A ...\n";
	}
};

class ConcreteStrategyB : public Strategy
{
	public :
	virtual ~ConcreteStrategyB() {}

	virtual void showStrategy()
	{
		cout << "Strategy B ...\n";
	}
};

/*----------------------------------------------------*/

class ChooseStrategy
{
	protected:
	Strategy *strategy;

	public:
	virtual ~ChooseStrategy() {}
	ChooseStrategy(Strategy *str) : strategy(str) {}

	virtual void setStrategy()
	{
		strategy->showStrategy();
	}
};
#endif