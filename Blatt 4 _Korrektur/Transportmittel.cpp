#include <iostream>
#include <string>
#include <cstring>
#include "Transportmittel.h"
using namespace std;

// allgeminer Konstruktor Transportmittel
Transportmittel::Transportmittel(double h, double b)
{
	hoehe = h;
	breite = b;
}

//Methoden
void Transportmittel::bewegen(string Richtung)
{
	string x = Richtung;
	cout << "Fährt in Richtung: " << x << endl;
}


//Getter
double Transportmittel::get_hoehe()
{
	return hoehe;
}

double Transportmittel::get_breite()
{
	return breite;
}

//Landtransportmittel

LandTransportmittel::LandTransportmittel(double h, double b, int rz) : Transportmittel(h, b)
{
	 radzahl = rz;
}

//Methoden
void LandTransportmittel::fahren(double km)
{
	cout << "Das Landtransportmittel ist: " << km << "km gefahren" << endl;
}

void LandTransportmittel::schieben(double km)
{
	cout << "Das Landtransportmittel wurde: " << km << "km geschoben" << endl;
}

//Getter
int LandTransportmittel::get_radzahl()
{
	return radzahl;
}

//Wassertransportmittel

WasserTransportmittel::WasserTransportmittel(double h, double b, double brt) : Transportmittel( h,b )
{
	bruttoregistertonnen = brt;
}

//Methoden
void WasserTransportmittel::anlegen(string Anlegehafen)
{
	cout << "Das Wassertransportmittel hat in " << Anlegehafen << " angelegt" << endl;
}

void WasserTransportmittel::ablegen(string Ablegehafen)
{
	cout << "Das Wassertransportmittel hat in " << Ablegehafen << " abgelegt" << endl;
}

//Getter
double WasserTransportmittel::get_bruttoregistertonne()
{
	return bruttoregistertonnen;
}

//Fahrrad
Fahrrad::Fahrrad(double h, double b, int ag, int rz) : LandTransportmittel(h, b, rz)
{
	anzahlgaenge = ag;
}

//Methoden
void Fahrrad::freihaendigfahren(string name)
{
	cout << name << " kann freihändig Fahrrad fahren" << endl;
}

void Fahrrad::schieben(double km)
{
	cout << "Das Fahrrad wurde " << km << " geschoben" << endl;
}

//Getter
int Fahrrad::get_anzahlgaenge()
{
	return anzahlgaenge;
}

//Rischka
Rischka::Rischka(double h, double b, string f, int rz) : LandTransportmittel(h, b, rz)
{
	farbe = f;
}

void Rischka::ziehen(int anzahlpersonen)
{
	cout << "Die Rikscha zieht " << anzahlpersonen << endl;
}

void Rischka::schieben(double km)
{
	cout << "Die Rikscha wurde " << km << "km geschoben";
}

//Getter
string Rischka::get_farbe()
{
	return farbe;
}


//Auto
Auto::Auto(double h, double b, int rz, double spv) : LandTransportmittel(h, b, rz)
{
	spritverbrauch = spv;
}

//Methoden
void Auto::tanken(int liter)
{
	cout << "Das Auto wurde mit " << liter << " getankt";
}

//Getter
double Auto::get_spritverbrauch()
{
	return spritverbrauch;
}