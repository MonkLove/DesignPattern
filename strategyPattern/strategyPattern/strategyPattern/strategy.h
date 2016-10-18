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
	public:
	virtual ~ConcreteStrategyA() {}

	virtual void showStrategy()
	{
		cout << "Strategy A!\n";
	}
};

class ConcreteStrategyB : public Strategy
{
	public :
	~ConcreteStrategyB() {}

	virtual void showStrategy()
	{
		cout << "Strategy B!\n";
	}
};

/*---------------------------------------------------------*/
class ChooseStrategy
{
	protected:
	Strategy *strategy;

	public:
	ChooseStrategy(Strategy *str) : strategy(str) {}

	void setStrategy()
	{
		strategy->showStrategy();
	}
};
#endif