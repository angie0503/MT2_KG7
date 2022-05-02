#include <iostream>
#include <"Klasse_Datum.h">
using namespace std;

//allgemeiner Konstruktor
Datum(int X, int Y, int Z)       
{
	tag = X;
	monat = Y;
	jahr = Z;
}


IstSchaltjahr(irgeneinJahr)
{
	if (0 == irgeneinJahr / 4)
	else
		cout << "Kein Schaltjahr" << ;
	return 0;

	if (0 == irgendeinJahr / 100)
		cout << "Kein Schaltjahr" << ;
	return 0;

	if (0 == irgendeinJahr / 400)
		cout << "Es ist ein Schaltjahr" << ;
	return 1;
}

TagdesJahres(tag, monat, jahr, IstSchaltjahr)
{
	int a;    //Hilfsparameter
	if (IstSchaltjahr == 1)
		a = 1;
	else
		a = 0;
	//Berechnung des Tages
	int b;    //b ist Tag des Jahres
	if (monat == 1)
		b = tag;

	else if (monat == 2)
	{
		b = tag + 31;
	}
	else if (monat == 3)
	{
		b = tag + 31 + 28 + a;
	}
	else if (monat == 4)
	{
		b = tag + 31 + a + 28 + 31;
	}
	else if (monat == 5)
	{
		b = tag + 31 + a + 28 + 31 + 30;
	}
	else if (monat == 6)
	{
		b = tag + 31 + 31 + a + 28 + 31 + 30;
	}
	else if (monat == 7)
	{
		b = tag + 31 + a + 28 + 31 + 30 + 31 + 30;
	}
	else if (monat == 8)
	{
		b = tag + 31 + a + 28 + 31 + 30 + 31 + 30 + 31;
	}
	else if (monat == 9)
	{
		b = tag + 31 + a + 28 + 31 + 30 + 31 + 30 + 31 + 31;
	}
	else if (monat == 10)
	{
		b = tag + 31 + a + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
	}
	else if (monat == 11)
	{
		b = tag + 31 + a + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
	}
	else if (monat == 12)
	{
		b = tag + 31 + a + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
	}
	return b;

