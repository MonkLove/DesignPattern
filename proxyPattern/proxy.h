#ifndef _PROXY_H_
#define _PROXY_H_
#include <iostream>
#include <string>
using namespace std;

class GiveGift
{
	public :
	virtual ~GiveGift() {}

	virtual void giveDolls() = 0;
	virtual void giveFlowers() = 0;
	virtual void giveClothes() = 0;
};

class Persuit : public GiveGift
{
	protected:
	string mName;

	public :
	virtual ~Persuit() {}
	Persuit(string name) : mName(name) { }

	virtual void giveDolls()
	{
		cout << this->mName << " , Hello Kitty!\n";
	}

	virtual void giveFlowers()
	{
		cout << this->mName << " , Roses, you jump, I jump!\n";
	}

	virtual void giveClothes()
	{
		cout << this->mName << " , Bikili \n";
	}

	virtual void giveHandbag()
	{
		cout << this->mName << " , LV \n";
	}
};

class Proxy
{
	private:
	Persuit *persuit;

	public:
	Proxy(string girl)
	{
		persuit = new Persuit(girl);
	}

	void giveGift()
	{
		persuit->giveDolls();
		persuit->giveClothes();
		persuit->giveFlowers();
		persuit->giveHandbag();
	}

	void giveDolls()
	{
		persuit->giveDolls();
	}

	void giveFlowers()
	{
		persuit->giveFlowers();
	}
};

#endif