#include "strategy.h"

void main()
{
	ChooseStrategy *chooseStr = new ChooseStrategy(new ConcreteStrategyA);
	chooseStr->setStrategy();

#ifdef _WIN32
	system("pause");
#endif
}