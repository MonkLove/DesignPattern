#include "templateMethod.h"

void main()
{
	ConcreteMethodA methodA;
	methodA.templateMethod();

	cout << "------------------------------------";

	ConcreteMethodB methodB;
	methodB.templateMethod();

}