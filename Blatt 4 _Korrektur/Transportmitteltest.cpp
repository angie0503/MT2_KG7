#include <iostream>
#include <string>
#include <cstring>
#include "Transportmittel.h"
using namespace std;

int main()
{
	//Test Klasse Transportmittel
	Transportmittel TM_1(1.8, 2.4);
	cout << "Test der Klasse Transportmittel" << endl;
	cout << "Das ist die Breite des Transportmittels: " << TM_1.get_breite() << endl;
	cout << "Das ist die Höhe des Transportmittels: " << TM_1.get_hoehe() << endl;
	TM_1.bewegen("Osten");
	cout << endl;

	//Test Klasse Landtransportmittel
	LandTransportmittel LM_1(1.5, 2.0, 4);
	cout << "Test der Klasse Landtransportmittel" << endl;
	cout << "Das ist die Breite des Landtransportmittels: " << LM_1.get_hoehe() << endl;
	cout << "Das ist die Höhe des Landtransportmittels: " << LM_1.get_breite() << endl;
	cout << "Das ist die Anzahl der Räder des Landtransportmittels: " << LM_1.get_radzahl() << endl;
	LM_1.bewegen("Norden");
	LM_1.fahren(20.0);
	LM_1.schieben(2.0);
	cout << endl;

	//Test Klasse Wassertransportmittel
	WasserTransportmittel WTM_1(50.0, 30.0, 2.0);
	cout << "Test der Klasse Wassertransportmittel" << endl;
	cout << "Das ist die Breite des Wassertransportmittels: " << WTM_1.get_hoehe() << endl;
	cout << "Das ist die Höhe des Wassertransportmittels: " << WTM_1.get_breite() << endl;
	cout << "Das ist die Anzahl der Bruttoregistertonnen des Wassertransportmittels: " << WTM_1.get_bruttoregistertonne() << endl;
	WTM_1.bewegen("Süden");
	WTM_1.anlegen("Venedig");
	WTM_1.ablegen("Hamburg");
	cout << endl;

	//Test der Klasse Fahrrad
	Fahrrad Fahrrad1(0.5, 0.2, 7, 2);
	cout << "Test der Klasse Fahrrad" << endl;
	cout << "Das ist die Breite des Fahrrads: " << Fahrrad1.get_hoehe() << endl;
	cout << "Das ist die Höhe des Fahrrads: " << Fahrrad1.get_breite() << endl;
	cout << "Das Fahrrad hat" << Fahrrad1.get_anzahlgaenge() << "Gänge" << endl;
	cout << "Das ist die Anzahl der Räder des Fahrrds: " << Fahrrad1.get_radzahl() << endl;
	Fahrrad1.bewegen("Westen");
	Fahrrad1.freihaendigfahren("Max");
	Fahrrad1.schieben(1.0);
	cout << endl;

	// Test der Klasse Rikscha
	Rischka Rikscha1(1.8, 1.2, "schwarz", 2);
	cout << "Test der Klasse Rikscha" << endl;
	cout << "Das ist die Breite der Riskscha: " << Rikscha1.get_hoehe() << endl;
	cout << "Das ist die Höhe der Rikscha: " << Rikscha1.get_breite() << endl;
	cout << "Die Rikscha ist " << Rikscha1.get_farbe() << endl;
	cout << "Das ist die Anzahl der Räder der Rikscha " << Rikscha1.get_radzahl();
	Rikscha1.bewegen("Osten");
	Rikscha1.ziehen(2);
	Rikscha1.schieben(3.0);
	cout << endl;

	//Test der Klasse Auto
	Auto Audi(1.2, 2.5, 4, 6.2);
	cout << "Test der Klasse Auto" << endl;
	cout << "Das ist die Breite des Autos: " << Audi.get_hoehe() << endl;
	cout << "Das ist die Höhe des Autos: " << Audi.get_breite() << endl;
	cout << "Das ist die Anzahl der Räder des Autos: " << Audi.get_radzahl() << endl;
	cout << "Das Auto hat einen Spritverbrauch von " << Audi.get_spritverbrauch() << " Litern";
	Audi.bewegen("Süden");
	Audi.tanken(30);
	cout << endl;

}