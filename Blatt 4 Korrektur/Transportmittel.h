#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Transportmittel //Basis Klasse
{
private:
	const double hoehe;
	const double breite;

public:
	//Methode
	string Richtung;
	void bewegen(string Richtung) const;

	//allgemeiner Konstruktor
	Transportmittel(const double hoehe, const double breite);

	//getter
	double get_hoehe();
	double get_breite();
};

class LandTransportmittel : public Transportmittel // abgeleitete Klasse LandTransportmittel
{
private:
	const int radzahl();
public:
	//Methoden
	void bewegen(string Richtung) const;
	void fahren(double km);
	void schieben(double km);

	//allgemeiner Konstruktor der Klasse LandTransportmittel
	LandTransportmittel(const double hoehe, const double breite, int radzahl);

	//getter
	int get_radzahl();
};


class WasserTransportmittel : public Transportmittel //abgeleitete Klasse WasserTransportmittel
{
private:
	double bruttoregistertonnen();
public:
	//Methoden
	void bewegen(string Richtung) const;
	void anlegen(string Anlegehafen);
	void ablegen(string Ablegehafen);

	//allgemeiner Kosntruktor der Klasse WasserTransportmittel
	WasserTransportmittel(const double hoehe, const double breite, double bruttoregistertonnen);

	//getter
	double get_bruttoregistertonne();
};


class Fahrrad : public LandTransportmittel //abgeleitete Klasse Fahrrad
{
private:
int anzahlgaenge;

public:
void freihaendigfahren(string name);
void schieben(double km);

Fahrrad(int anzahlgeange, const int radzahl, const double hoehe, const double breite); //allgemeiner Konstruktor

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

Rischka(string farbe, const int radzahl, const double hoehe, const double breite); //allgemeiner Kosntruktor 

//getter
int get_farbe();
};

class Auto : public LandTransportmittel
{
private:
	double spritverbrauch;

public:
	void tanken(int liter);

Auto(double spritverbrauch, const int radzahl, const double hoehe, const double breite); //allgemeiner Konstruktor

//getter
double get_spritverbrauch();
};