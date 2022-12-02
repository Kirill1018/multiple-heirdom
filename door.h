#pragma once
#include "component.h"
class door : public component
{
public:
	door()
	{

	}
	door(int time) : component(time) {};
	virtual void print()
	{
		cout << "дверь" << endl;
	}
	virtual void period()
	{
		cout << "время=" << door_time << " ч." << endl;
		cout << "цена=" << door_price << "р. " << endl;
	}
protected:
	double door_height = 1.8;
	int door_width = 1, door_time = 6, door_price = 10000;
};