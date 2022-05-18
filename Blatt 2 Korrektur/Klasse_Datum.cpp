#include <iostream>
#include "Klasse_Datum.h"
using namespace std;


int Datum::IstSchaltjahr(int irgendeinSchaltjahr)
{
	if (irgendeinSchaltjahr % 100 == 0)
	{
		return 0;
	}
	else if (irgendeinSchaltjahr % 4 == 0 || irgendeinSchaltjahr % 400 == 0)
	{
		return 1;

	}

	else
	{
		return 0;
	}

	if (plappern == true)
	{
		cout << "IstSchaltjahr wurde durchlaufen und berechnet.\n" << endl;
	}
}

bool Datum::plappern(true);



int Datum::TdJ(int tag, int monat, int jahr)
{

	int TpM[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	int TdJ = 0;

	for (int i = 1; i < monat; i++)
		{
			TdJ += TpM[i];
		}

	TdJ += tag;

	if (IstSchaltjahr(jahr) == 1) 
		{
			TdJ += 1;
		}
	if (plappern == true)
		{
			cout << "TagdesJahres wurde berechnet.\n" << endl;
		}
	return TdJ;
}