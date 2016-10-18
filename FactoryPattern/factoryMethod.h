/*
** Using four arithmetic operations to elaborate the  factory method pattern
*/
#ifndef _FACTORYMETHOD_H_
#define _SIMPLEFACTORY_H_

#include "simpleFactory.h"

template <typename T>
class CalculateFacotry
{
public:
	virtual ~CalculateFacotry() {}

	virtual Calculate<T> *setOperate() = 0;
};

template <typename T>
class AddFactory : public CalculateFacotry<T>
{
public:
	virtual ~AddFactory() {}

	virtual Calculate<T> *setOperate()
	{
		return new AddOperate<T>;
	}
};

template <typename T>
class MinusFactory : public CalculateFacotry<T>
{
public:
	virtual ~ MinusFactory() {}

	virtual Calculate<T> *setOperate()
	{
		return new MinusOperate<T>;
	}
};

template <typename T>
class MultiFactory : public CalculateFacotry<T>
{
public:
	virtual ~ MultiFactory() {}

	virtual Calculate<T> *setOperate()
	{
		return new MinusOperate<T>;
	}
};
#endif