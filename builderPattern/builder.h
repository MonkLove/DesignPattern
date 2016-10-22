#ifndef _BUILDER_H_
#define _BUILDER_H_

#include "builder.h"
#include <iostream>
using namespace std;

class Builder
{
	public:
	virtual ~Builder() {}

	virtual void createObj() = 0;
};

class SkyScraper : public Builder
{
	public:
	virtual ~SkyScraper() {}

	virtual void createObj()
	{
		cout << "Build skyscraper ...\n";
	}
};

class Banda : public Builder
{
	public:
	virtual ~Banda() {}

	virtual void createObj()
	{
		cout << "Build banda ...\n";
	}
};

class Director
{
	protected : 
	Builder *mBuild;

	public :
	Director(Builder *obj) : mBuild(obj) {}
	void builder()
	{
		mBuild->createObj();
	}

};
#endif