#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class transportmittel //Basis Klasse
{
private:
	double hoehe;
	double breite;
	//allgemeiner Konstruktor
	transportmittel();

public:
	//Methode
	string richtung;
	void bewegen(string richtung)
	//getter
	double get_hoehe();
	double get_breite();
}

class landtransportmittel : class transportmittel
{
private:
	int radzahl();
public:
	//Methoden
	void fahren (double km);
	void schieben(double Km);
	//getter
	int get_radzahl();
}
class wassertransportmittel : class transportmittel
{
private:
	double bruttoregistertonnen();
public:
	//Methoden
	void anlegen(string anlegehafen);
	void ablegen(string ablegehafen);
	//getter
	double get_bruttoregistertonne();
};