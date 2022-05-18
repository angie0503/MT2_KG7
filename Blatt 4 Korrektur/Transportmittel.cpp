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
void bewegen(string Richtung)
{
	string x = Richtung;
	cin >> x;

		if (x == "Norden")
		{
			cout << "in Richtung" << x << "bewegen" << endl;
		}
		else if (x == "Sueden")
		{
			cout << "in Richtung" << x << "bewegen" << endl;
		}
		else if (x == "Osten")
		{
			cout << "in Richtung" << x << "bewegen" << endl;
		}
		else if (x == "Westen")
		{
			cout << "in Richtung" << x << "bewegen" << endl;
		}
}
LandTransportmittel::LandTransportmittel(int r)
{
	radzahl = r;
}

WasserTransportmittel::WasserTransportmittel(double h, double b, double br)
{
	hoehe = h;
	breite = b;
	bruttoregistertonnen = br;
}






	

