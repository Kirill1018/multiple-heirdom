#pragma once
#include "multiple inheritance.cpp"
struct house
{
	struct wall
	{
		double height = 2.7;
		int width = 4, wall_time = 3, wall_price = 7000;
	};
	struct window
	{
		int wind_height = 1, wind_width = 1, wind_time = 9, wind_price = 3000;
	};
	struct door
	{
		double door_height = 1.8;
		int door_width = 1, door_time = 6, door_price = 10000;
	};
	struct roof
	{
		int roof_length = 4, roof_width = 2, roof_time = 2, roof_price = 2000;
	};
	wall _wall;
	window _window;
	door _door;
	roof _roof;
	int time = _wall.wall_time + _window.wind_time + _door.door_time + _roof.roof_time, price = _wall.wall_price + _window.wind_price + _door.door_price + _roof.roof_price;
};
void rate(int wall_amount, int wind_amount)
{
	int cost = 0, x = 0;//исходное значение цены и первый элемент массива
	house home;
	cost = home.price;
	cout << "цена=" << cost + home._wall.wall_price * (wall_amount - 1) + home._window.wind_price * (wind_amount - 1) << " р." << endl;
}
void period()
{
	house building;
	building._wall.wall_time;
	int timing = 0, x = 0, wall_amount, wind_amount;//исходное значение времени и первый элемент массива
	cout << "количество стен (минимум 2)=";
	cin >> wall_amount;
	if (wall_amount < 2) cout << "ошибка" << endl;
	cout << "количество окон (минимум 2)=";
	cin >> wind_amount;
	if (wind_amount < 2) cout << "ошибка" << endl;
	timing = building.time;
	cout << "время=" << timing + (wall_amount - 1) * building._wall.wall_time + (wind_amount - 1) * building._window.wind_time << " ч." << endl;
	rate(wall_amount, wind_amount);
}