#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
#include "wall.h"
#include "door.h"
#include "window.h"
#include "roof.h"
#include "component.h"
class home : public wall, window, door, roof
{
public:
	int time_arr[4] = { wall_time, door_time, wind_time, roof_time }, price_arr[4] = { wall_price, door_price, wind_price, roof_price };
	void time();
	void price(int wall_amount, int wind_amount);
};