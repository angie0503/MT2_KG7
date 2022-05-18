#include <iostream>
#include <string>
#include <cstring>
#include "Transportmittel.h"
using namespace std;

int main()
{
	//Test Basisklasse

	const double hoehe;
	const double breite;
	string x;
	double km;
	string Anlegehafen;
	string Ablegehafen;

	cout << "Hallo! Bitte geben Sie die Hoehe des Transportmittels ein!\n" << endl;
	cin >> hoehe;
	cout << "Geben Sie nun die Breite des Transportmittels ein!\n" << endl;
	cin >> breite;
	Transportmittel Bus = Transportmittel(hoehe, breite);
	cout << "Die Hoehe des Transportmittels betraegt " << Bus.get_hoehe << endl;
	cout << "Die Breite des Transportmittels betraegt " << Bus.get_breite << endl;
	
	//Test der Methode in der Basisklasse

	Transportmittel Bollerwagen = Bollerwagen.bewegen(x);
	cout << "Bitte geben Sie die Richtung ein, in die Sie sich bewegen wollen!\n" << endl;
	cin >> x;
	cout << "in Richtung " << x << " bewegen\n" << endl;

	// Test öffentliche Methoden der abgeleiteten Klassen
	LandTransportmittel Taxi = Taxi.fahren(km);
	cout << "Geben Sie die Kilometer an, die gefahren werden sollen!\n" << endl;
	cin >> km;
	cout << "Es solllen " << km << "km gefahren werden. \n" << endl;

	LandTransportmittel Schubkarren = Schubkarren.schieben(km);
	cout << "Geben Sie ein, wie viele km geschoben werden sollen!\n" << endl;
	cin >> km;
	cout << "Sie wollen das Transportmittel " << km << "km schieben.\n" << endl;

	WasserTransportmittel Schiff = Schiff.anlegen(Anlegehafen);
	cout << "Welchen Zielort streben Sie an?\n" << endl;
	cin >> Anlegehafen;
	cout << "Der Anlegehafen lautet: " << Anlegehafen << "\n" << endl;

	WasserTransportmittel Kreuzfahrtschiff = Kreuzfahrtschiff.ablegen(Ablegehafen);
	cout << "Von wo wollen Sie abreisen?\n" << endl;
	cin >> Ablegehafen;
	cout << "Ihr Ablegehafen lautet: " << Ablegehafen << "\n" << endl;

	WasserTransportmittel Boot = Boot.bewegen(x);
	cout << "In welche Richtung möchten Sie sich mit dem Wassertransportmittel bewegen?\n" << endl;
	cin >> x;
	cout << "In Richtung" << x << "bewegen\n" << endl;

	return 0;
}