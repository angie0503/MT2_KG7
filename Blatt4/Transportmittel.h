#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class transportmittel
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