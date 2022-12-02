#pragma once
#include "component.h"
class roof : public component
{
public:
	roof()
	{

	}
	roof(int time) : component(time) {};
	virtual void print()
	{
		cout << "крыша" << endl;
	}
	virtual void period()
	{
		cout << "время=" << roof_time << " ч." << endl;
		cout << "цена=" << roof_price << " р." << endl;
	}
protected:
	int roof_length = 4, roof_width = 2, roof_time = 2, roof_price = 2000;
};