#include <iostream>
#include <string>
#include <cstring>
#include "Transportmittel.h"
using namespace std;

int main()
{
	//Test Basisklasse

	const double h;
	const double b;
	string x;
	int r;
	double br;
	double km;
	string Anlegehafen;
	string Ablegehafen;
	string name;
	int anzahlg;
	string f;
	int anzahlpersonen;
	double sprit;
	int liter;


	cout << "Hallo! Bitte geben Sie die Hoehe des Transportmittels ein!\n" << endl;
	cin >> h;
	cout << "Geben Sie nun die Breite des Transportmittels ein!\n" << endl;
	cin >> b;
	Transportmittel Bus = Transportmittel(h, b);
	cout << "Die Hoehe des Transportmittels betraegt " << Bus.get_hoehe << "\n" << endl;
	cout << "Die Breite des Transportmittels betraegt " << Bus.get_breite << "\n" << endl;
	
	//Test der Methode in der Basisklasse

	Transportmittel Bollerwagen = Bollerwagen.bewegen(x);
	cout << "Bitte geben Sie die Richtung ein, in die Sie sich bewegen wollen!\n" << endl;
	cin >> x;
	cout << "in Richtung " << x << " bewegen\n" << endl;

	// Test öffentliche Methoden der abgeleiteten Klasse LandTransportmittel
	cout << "Hallo! Bitte geben Sie die Radzahl des Transportmittels ein!\n" << endl;
	cin >> r;
	LandTransportmittel Bus2 = Bus2(r,h,b);
	cout << "Die Radzahl des Transportmittels betraegt " << Bus2.get_radzahl << "\n" << endl;
	cout << "Die Hoehe des Transportmittels betraegt " << Bus2.get_hoehe << "\n" << endl;
	cout << "Die Breite des Transportmittels betraegt " << Bus2.get_breite << "\n" << endl;
	
	LandTransportmittel Taxi = Taxi.fahren(km);
	cout << "Geben Sie die Kilometer an, die gefahren werden sollen!\n" << endl;
	cin >> km;
	cout << "Es solllen " << km << "km gefahren werden. \n" << endl;

	LandTransportmittel Schubkarren = Schubkarren.schieben(km);
	cout << "Geben Sie ein, wie viele km geschoben werden sollen!\n" << endl;
	cin >> km;
	cout << "Sie wollen das Transportmittel " << km << "km schieben.\n" << endl;

	// Test öffentliche Methoden der abgeleiteten Klasse WasserTransportmittel
	cout << "Hallo! Bitte geben Sie die Bruttoregistertonnen des Transportmittels ein!\n" << endl;
	cin >> br;
	WasserTransportmittel Schiff1 = Schiff1(br, h, b);
	cout << "Die Bruttoregistertonnen des Transportmittels betragen " << Schiff1.get_bruttoregistertonne << "\n" << endl;
	cout << "Die Hoehe des Transportmittels betraegt " << Schiff1.get_hoehe << "\n" << endl;
	cout << "Die Breite des Transportmittels betraegt " << Schiff1.get_breite << "\n" << endl;

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

	// Test der abgeleiteten LandTransportmittel Klasse Fahrrad

	cout << "Hallo! Bitte geben Sie die Anzahl der Gaenge ihres Fahrrades ein!\n" << endl;
	cin >> anzahlg;
	Fahrrad Bike = Bike(anzahlg,r,h,b);
	cout << "Ihr Fahrrad besitzt " << Bike.get_anzahlgaenge << " Gaenge \n" << endl;
	cout << "Ihr Fahrrad beitzt " << Bike.get_radzahl << "Raeder.\n" << endl;
	cout << "Die Hoehe des Transportmittels betraegt " << Bike.get_hoehe << "\n" << endl;
	cout << "Die Breite des Transportmittels betraegt " << Bike.get_breite << "\n" << endl;

	Fahrrad Bike1 = Bike1.freihaendigfahren(name);
	cout << "Nennen Sie den Namen des Fahrers, welcher freihaendig Fahrradfahren kann!\n" << endl;
	cin >> name;
	cout << "Der Fahrer heisst " << name << "\n." << endl;

	Fahrrad Bike2 = Bike2.schieben(km);
	cout << "Geben Sie die Strecke ein, die gefahren werden soll!" << endl;
	cin >> km;
	cout << "Die Methode wurde überschrieben.\n" << endl;

	// Test der abgeleiteten LandTransportmittel Klasse Rischka

	cout << "Hallo! Bitte geben Sie die Farbe der Rischka ein!\n" << endl;
	cin >> f;
	Rischka Rik = Rik(f, r, h, b);
	cout << "Ihre Rischka besitzt die Farbe " << Rik.get_farbe << "  \n" << endl;
	cout << "Ihre Rischka beitzt " << Rik.get_radzahl << "Raeder.\n" << endl;
	cout << "Die Hoehe der Rischka betraegt " << Rik.get_hoehe << "\n" << endl;
	cout << "Die Breite der Rischka betraegt " << Rik.get_breite << "\n" << endl;

	Rischka Rik2 = Rik2.ziehen(anzahlpersonen);
	cout << "Geben Sie die Anzahl der verfügbaren Personen ein!\n" << endl;
	cin >> anzahlpersonen;
	cout << anzahlpersonen << " Personen ziehen die Rischka.\n" << endl;

	Rischka Rik3 = Rik3.schieben(km);
	cout << "Die Methode wurde ueberschrieben.\n" << endl;

	// Test der abgeleiteten LandTransportmittel Klasse Auto

	cout << "Hallo! Bitte geben Sie den Spritverbrauch Ihres Autos an!\n" << endl;
	cin >> sprit;
	Auto Audi = Audi(sprit, r, h, b);
	cout << "Ihr Auto hat einen Spritverbrauch von " << Audi.get_spritverbrauch << "  \n" << endl;
	cout << "Ihr Auto beitzt " << Audi.get_radzahl << "Raeder.\n" << endl;
	cout << "Die Hoehe des Autos betraegt " << Audi.get_hoehe << "\n" << endl;
	cout << "Die Breite des Autos betraegt " << Audi.get_breite << "\n" << endl;

	Auto BMW = BMW.tanken(liter);
	cout << "Wie viele Liter wollen Sie tanken?\n" << endl;
	cin >> liter;
	cout << "Sie wollen " << liter << "tanken.\n" << endl;

	Auto VW = VW.schieben(km);
	cout << "Diese Methode wurde ueberschrieben.\n" << endl;

	return 0;
}