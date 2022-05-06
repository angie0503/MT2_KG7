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
	
	
	
	
	
}

int Datum::TagDesJahres(int tag, int monat, int jahr)
{
	int a;    //Hilfsparameter
	int TdJ;

	if (IstSchaltjahr(jahr) == 1)
	{
		a = 1;
	}
		
	else
	{
		a = 0;

	}

	//Berechnung des Tages
	if (monat == 1)
	{	
		TdJ = tag;

	}
		
	else if (monat == 2)
	{
		TdJ = tag + 31;
	}
	else if (monat == 3)
	{
		TdJ = tag + 31 + 28 + a;
	}
	else if (monat == 4)
	{
		TdJ = tag + 31 + a + 28 + 31;
	}
	else if (monat == 5)
	{
		TdJ = tag + 31 + a + 28 + 31 + 30;
	}
	else if (monat == 6)
	{
		TdJ = tag + 31 + 31 + a + 28 + 31 + 30;
	}
	else if (monat == 7)
	{
		TdJ = tag + 31 + a + 28 + 31 + 30 + 31 + 30;
	}
	else if (monat == 8)
	{
		TdJ = tag + 31 + a + 28 + 31 + 30 + 31 + 30 + 31;
	}
	else if (monat == 9)
	{
		TdJ = tag + 31 + a + 28 + 31 + 30 + 31 + 30 + 31 + 31;
	}
	else if (monat == 10)
	{
		TdJ = tag + 31 + a + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
	}
	else if (monat == 11)
	{
		TdJ = tag + 31 + a + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
	}
	else if (monat == 12)
	{
		TdJ = tag + 31 + a + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
	}

	return TdJ;
}

