#pragma once
#include"../../Core/Ent/steam/steam.h"
//тута меню

void menu()
{
	int a, b = 0;
	const int size = 4;
	string arrow[size] = { "--------", " ", " ", " "};
	do
	{
		cout << "\t\tMARKET\t\tLIBRARY\t\tCOMMUNITY\tPROFILE" << endl;
		for (int i = 0; i < size; i++)
			cout << "\t\t" << arrow[i];
		cout << endl;
		a = _getch();
		for (int i = 0; i < size; i++)
		{
			if (a == 77 && i + 1 < 4)
			{
				if (arrow[i] == "--------")
				{
					arrow[i + 1] = arrow[i];
					arrow[i] = " ";
					break;
				}
			}
			else if (a == 75 && i + 1 < 4)
			{
				if (arrow[i + 1] == "--------")
				{
					arrow[i] = arrow[i + 1];
					arrow[i + 1] = " ";
					break;
				}
			}
		}
		if (a == 13)
		{
			for (int i = 0; i < size; i++)
			{
				if (arrow[i] == "--------")
					b = i + 1;
			}
			switch (b)
			{
			case(1):
			{
				market();
				break;
			}
			case(2):
			{
				library();
				break;
			}
			case(3):
			{
				community();
				break;
			}
			case(4):
			{
				profile();
				break;
			}
			}
			_getch();
		}
		system("cls");
	} while (a != 0);









}