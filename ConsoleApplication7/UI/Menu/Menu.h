#pragma once
#include"../../Core/Ent/steam/steam.h"
//тута меню

void menu()
{
	int a;
	const int size = 4;
	char arrow[size] = { '-', ' ', ' ', ' ' };
	cout << "		MARKET		LIBRARY		COMMUNITY		PROFILE		" << endl;
	for (int i = 0; i < size; i++)
		cout << arrow[i] << "		";
	a = _getch();
	for (int i = 0; i < size; i++)
	{
		if (a == 77)
		{
			arrow[i + 1] = arrow[i];
		}
		else if (a == 75)
		{
			arrow[i] = arrow[i + 1];
		}
	}
	









}