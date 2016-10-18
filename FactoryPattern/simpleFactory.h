/*
** Using four arithmetic operations to elaborate the simple factory pattern
*/
#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_
template <typename T>
class Calculate
{
protected:
	T firstNum;
	T secondNum;

public:
	virtual ~Calculate() {}

	void setFirstNum(T val)
	{
		this->firstNum = val;
	}

	void setSecondNum(T val)
	{
		this->secondNum = val;
	}

	virtual double getResult() = 0;
};

template <typename T>
class AddOperate : public Calculate<T>
{
public:
	virtual ~AddOperate() {}

	virtual double getResult()
	{
		return (firstNum + secondNum);
	}
};

template <typename T>
class MinusOperate : public Calculate<T>
{
public:
	virtual ~MinusOperate() {}

	virtual double getResult()
	{
		return (this->firstNum - this->secondNum);
	}
};

template <typename T>
class MultiOperate : public Calculate<T>
{
public :
	virtual ~MultiOperate() {}
	virtual double getResult()
	{
		return (this->firstNum * this->secondNum);
	}
};

/*------------------------------------------------------------------*/

template <typename T>
class CalculateSimpleFacotry
{
public:
	virtual ~CalculateSimpleFacotry() {}

	/*virtual Calculate<T> *setOperate() = 0;*/
	static Calculate<T> *getOperate(char opt)
	{
		switch (opt)
		{
			case '+':
				return new AddOperate<T>;
				break;
			case '-':
				return new MinusOperate<T>;
				break;
			case '*':
				return new MultiOperate<T>;
				break;
			default:
				return NULL;
				break;
		}
	}
};
#endif