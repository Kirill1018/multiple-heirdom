#include "multiple inheritance.cpp"
#include "���.h"
enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
#include <stdio.h>
/*0 � ������
1 � �����
2 � �������
3 � �������
4 � �������
5 � �������
6 � ������
7 � �����
8 � �����
9 � ����� - �����
A � ������ - �������
B � ������ - �������
� � ������ - �������
E � ������ - ������
F � ���� - �����
system("color F0");*/  // ��������� ������ ���� � ������� ������
void main()
{
	setlocale(LC_ALL, "ru");
	
	cout << "������� ������ � ������� c++=0" << endl;
	cout << "������� ������ � ������� c=1" << endl;
	int way;
	cin >> way;
	try
	{
		if (way < 0 || way > 1) throw "������";
	}
	catch(const char *log)
	{
		cout << log << endl;
	}
	switch (way)
	{
	case 0:
	{
		home building;
		building.time();
		SetColor(1, 0);
		cout << "**********" << endl;
		component* components[4] = { new wall(3), new window(9), new roof(2), new door(6) };
		int x = 0;//������ ����� �������
		while (x < 4)
		{
			components[x]->print();
			components[x]->period();
			x++;
		}
		break;
	}
	case 1:
	{
		setlocale(LC_ALL, "ru");
		const int size = 2;
		house _house;
		int massive[size] = { _house.price, _house.time };
		period();
		break;
	}
	}
}
void home::time()
{
	int time = 0, x = 0, wall_amount, wind_amount;//�������� �������� ������� � ������ ������� �������
	SetColor(2, 0);
	cout << "���������� ���� (������� 2)=";
	cin >> wall_amount;
	SetColor(3, 0);
	try
	{
		if (wall_amount < 2) throw "������";
	}
	catch (const char* log)
	{
		cout << log << endl;
	}
	SetColor(4, 0);
	cout << "���������� ���� (������� 2)=";
	cin >> wind_amount;
	SetColor(5, 0);
	try
	{
		if (wind_amount < 2) throw "������";
	}
	catch (const char* log)
	{
		cout << log << endl;
	}
	while (x < 4)
	{
		time_arr[x];
		time += time_arr[x];
		x++;
	}
	SetColor(6, 0);
	cout << "�����=" << time + (wall_amount - 1) * wall_time + (wind_amount - 1) * wind_time << " �." << endl;
	home _house;
	_house.price(wall_amount, wind_amount);
}
void home::price(int wall_amount, int wind_amount)
{
	int price = 0, x = 0;//�������� �������� ���� � ������ ������� �������
	while (x < 4)
	{
		price_arr[x];
		price += price_arr[x];
		x++;
	}
	SetColor(7, 0);
	cout << "����=" << price + wall_price * (wall_amount - 1) + wind_price * (wind_amount - 1) << " �." << endl;
}