#include "prototype.h"

void main()
{
	Prototype *objA = new ConcreteObjectA;
	Prototype *objA1 = objA->clone();

	system("pause");
}