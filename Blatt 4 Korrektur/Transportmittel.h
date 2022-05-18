#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Transportmittel //Basis Klasse
{
private:
	double hoehe;
	double breite;

public:
	//Methode
	string Richtung;
	void bewegen(string Richtung);

	//allgemeiner Konstruktor
	Transportmittel(double hoehe, double breite);

	//getter
	double get_hoehe();
	double get_breite();
};

class LandTransportmittel : public Transportmittel // abgeleitete Klasse LandTransportmittel
{
private:
	int radzahl();
public:
	//Methoden
	void fahren(double km);
	void schieben(double km);

	//allgemeiner Konstruktor der Klasse LandTransportmittel
	LandTransportmittel(double hoehe, double breite, int radzahl);

	//getter
	int get_radzahl();
};


class WasserTransportmittel : public Transportmittel //abgeleitete Klasse WasserTransportmittel
{
private:
	double bruttoregistertonnen();
public:
	//Methoden
	void anlegen(string Anlegehafen);
	void ablegen(string Ablegehafen);

	//allgemeiner Kosntruktor der Klasse WasserTransportmittel
	WasserTransportmittel(double hoehe, double breite, double bruttoregistertonnen);

	//getter
	double get_bruttoregistertonne();
};


class Fahrrad : public LandTransportmittel //abgeleitete Klasse Fahrrad
{
private:
int anzahlgaenge;

public:
void freihaendigfahren(string name);
void schieben() { cout << "Diese Methode wurde überschrieben"; }

Fahrrad(int anzahlgeange, int radzahl, double hoehe, double breite); //allgemeiner Konstruktor

//getter

int get_anzahlgaenge();
};


//abgeleitete Funktion Rischka
class Rischka : public LandTransportmittel
{
private:
	string farbe;

public:
	void ziehen(int anzahlpersonen);

Rischka(string farbe, int radzahl, double hoehe, double breite); //allgemeiner Kosntruktor 

//getter
int get_farbe();
};

class Auto : public LandTransportmittel
{
private:
	double spritverbrauch;

public:
	void tanken(int liter);

Auto(double spritverbrauch, int radzahl, double hoehe, double breite); //allgemeiner Konstruktor

//getter
double get_spritverbrauch();
};