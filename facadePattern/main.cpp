#include "facade.h"


void main()
{
	Facade facade;
	facade.methodA();
	facade.methodB();
	facade.methodC();

#ifdef _WIN32
	system("pause");
#endif
}