#include <iostream>
#include "simpleFactory.h"
#include "factoryMethod.h"
using namespace std;

int main(int argc, char **argv)
{
	CalculateFacotry<int> *oper = new AddFactory<int>;
	Calculate<int> *calMethod = oper->setOperate();
	calMethod->setFirstNum(5);
	calMethod->setSecondNum(1);

	Calculate<int> *calSimple = CalculateSimpleFacotry<int>::getOperate('-');
 	calSimple->setFirstNum(1);
 	calSimple->setSecondNum(2);

 	cout<<"Result(simple) : "<<calSimple->getResult()<<endl;
	cout<<"Result(method) : "<<calMethod->getResult()<<endl;

#ifdef _WIN32
	system("pause");
#endif
 	return 0;
}