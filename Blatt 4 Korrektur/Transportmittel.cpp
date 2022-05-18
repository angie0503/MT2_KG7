#include <iostream>
#include <string>
#include <cstring>
#include "Transportmittel.h"
using namespace std;

//allgemeiner Konstruktor
Transportmittel::Transportmittel(double h, double b)
{
	hoehe = h;
	breite = b;
}

//Methode
Transportmittel::bewegen(string Richtung) const
{
	string x = Richtung;
	cin >> x;

		if (x == "Norden")
		{
			cout << "in Richtung" << x << "bewegen\n" << endl;
		}
		else if (x == "Sueden")
		{
			cout << "in Richtung" << x << "bewegen\n" << endl;
		}
		else if (x == "Osten")
		{
			cout << "in Richtung" << x << "bewegen\n" << endl;
		}
		else if (x == "Westen")
		{
			cout << "in Richtung" << x << "bewegen\n" << endl;
		}
}
LandTransportmittel::LandTransportmittel(const double h,const double b, int r)
{
	radzahl = r;
}
LandTransportmittel::fahren(double km)
{
	if (km <= 0)
	{
		return false;
	}
	else
	{
		return km;
	}
}
LandTransportmittel::schieben(double km)
{
	if (km <= 0)
	{
		return false;
	}
	else
	{
		return km;
	}
}

WasserTransportmittel::WasserTransportmittel(const double h, const double b, double br)
{
	hoehe = h;
	breite = b;
	bruttoregistertonnen = br;
}
WasserTransportmittel::anlegen(string Anlegehafen)
{
	cin >> Anlegehafen;
	cout << "Der Anlegehafen lautet" << Anlegehafen << "\n" << endl;
}
WasserTransportmittel::ablegen(string Ablegehafen)
{
	cin >> Ablegehafen;
	cout << "Der Ablegehafen lautet" << Ablegehafen << "\n" << endl;
}

Fahrrad::Fahrrad(int anzahlg, const int r, const double h, const double b)
{
	anzahlgaenge = anzahlg;
	radzahl = r;
	hoehe = h;
	breite = b;
}
Fahrrad::freihaendigfahren(string name)
{
	cin >> name;
	cout << "Der Name vom Fahrer, welcher freihaendig fahren kann lautet: " << name << "\n" << endl;
}
Fahrrad::schieben(double km)
{ 
	cout << "Diese Methode wurde ueberschrieben.\n" << endl;
}

Rischka::Rischka(string f, const int r, const double h, const double b)
{
	farbe = f;
	radzahl = r;
	hoehe = h;
	breite = b;
}
Rischka::ziehen(int anzahlpersonen)
{
	if (anzahlpersonen <= 0)
	{
		return false;
	}
	else
	{
		return anzahlpersonen;
	}
}
Rischka::schieben(double km)
{
	cout << "Diese Methode wurde ueberschrieben.\n" << endl;
}
Auto::Auto(double sprit, const int r, const double h, const double b)
{
	sritverbrauch = sprit;
	radanzahl = r;
	hoehe = h;
	breite = b;
}
Auto::tanken(int liter)
{
	if (liter <= 0)
	{
		return false;
	}
	else
	{
		return liter;
	}
}





	

