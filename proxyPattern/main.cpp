#include "proxy.h"

void main()
{
	Proxy proxy("Audrey");
	proxy.giveDolls();
	proxy.giveFlowers();

#ifdef _WIN32
	system("pause");
#endif
}