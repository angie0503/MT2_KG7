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
	Transportmittel(double hoehe, double breite);

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
	LandTransportmittel(double hoehe, double breite, int radzahl);

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
	WasserTransportmittel(double hoehe, double breite, double bruttoregistertonnen);

	//getter
	double get_bruttoregistertonne();
};


class Fahrrad : public LandTransportmittel //abgeleitete Klasse Fahrrad
{
private:
	int anzahlgaenge;

public:
	Fahrrad(double hoehe, double breite, int anzahlgaenge, int radzahl);
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
	Rischka(double hoehe, double breite, string farbe, int radzahl);
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
	Auto(double hoehe, double breite, int radzahl, double spritverbrauch);
	void tanken(int liter);

	

	//getter
	double get_spritverbrauch();
};
