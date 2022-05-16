#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Transportmittel //Basis Klasse
{
private:
	double hoehe;
	double breite;

	//allgemeiner Konstruktor
	Transportmittel(double hoehe, double breite);

public:
	//Methode
	string richtung;
	void bewegen(string richtung);

	//getter
	double get_hoehe();
	double get_breite();
};

class LandTransportmittel : public Transportmittel
{
private:
	int radzahl();
public:
	//Methoden
	void fahren(double km);
	void schieben(double Km);

	//allgemeiner Konstruktor der Klasse LandTransportmittel
	LandTransportmittel(int radzahl);

	//getter
	int get_radzahl();
};


class WasserTransportmittel : public Transportmittel
{
private:
	double bruttoregistertonnen();
public:
	//Methoden
	void anlegen(string anlegehafen);
	void ablegen(string ablegehafen);

	//allgemeiner Kosntruktor der Klasse WasserTransportmittel
	WasserTransportmittel( double bruttoregistertonnen);

	//getter
	double get_bruttoregistertonne();
};