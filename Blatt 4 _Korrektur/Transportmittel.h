#pragma once
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
	string richtung;
	void bewegen(string Richtung);
	
	//allgemeiner Konstruktor
	Transportmittel(double h, double b);

	//getter
	double get_hoehe();
	double get_breite();
};

class LandTransportmittel : public Transportmittel // abgeleitete Klasse LandTransportmittel
{
private:
	int radzahl;

public:
	//Methoden
	void fahren(double km);
	void schieben(double Km);

	//allgemeiner Konstruktor der Klasse LandTransportmittel
	LandTransportmittel(double h, double b, int rz);

	//getter
	int get_radzahl();
};


class WasserTransportmittel : public Transportmittel //abgeleitete Klasse WasserTransportmittel
{
private:
	double bruttoregistertonnen;
public:
	//Methoden
	void anlegen(string Anlegehafen);
	void ablegen(string Ablegehafen);

	//allgemeiner Kosntruktor der Klasse WasserTransportmittel
	WasserTransportmittel(double h, double b, double brt);

	//getter
	double get_bruttoregistertonne();
};


class Fahrrad : public LandTransportmittel //abgeleitete Klasse Fahrrad
{
private:
	int anzahlgaenge;

public:
	Fahrrad(double h, double b, int ag, int rz);
	void freihaendigfahren(string name);
	void schieben(double km);


	//getter

	int get_anzahlgaenge();
};


//abgeleitete Funktion Rischka
class Rischka : public LandTransportmittel
{
private:
	string farbe;

public:
	Rischka(double h, double b, string f, int rz);
	void ziehen(int anzahlpersonen);
	void schieben(double km);
	

	//getter
	string get_farbe();
};

class Auto : public LandTransportmittel
{
private:
	double spritverbrauch;

public:
	Auto(double h, double b, int rz, double spv);
	void tanken(int liter);

	

	//getter
	double get_spritverbrauch();
};
