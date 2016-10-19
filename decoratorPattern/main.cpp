#include "decorator.h"

void main00()
{
	ConcreteGirl *girl = new ConcreteGirl;
	ConcreteDecorator decorator(girl);

	decorator.makeup();
	decorator.addBehavior();

#ifdef _WIN32
	system("pause");
#endif
}