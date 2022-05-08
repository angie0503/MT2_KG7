#include<iostream>
#include<string>
#include "Auto.h"
using namespace std;

//Standardkonstruktoren
Auto() 
{
	radzahl = 4;
	farbe = "schwarz";
	ps = 280;
	anzahl_sitze = 5;
	spritverbrauch = 5;
	tankinhalt = 45;
	tankgroesse = 60;
}
//Kopierkonstruktor
Auto(const Auto& other) 
{
	radzahl = other.radzahl;
	farbe = other.farbe;
	ps = other.ps;
	anzahl_sitze = other.anzahl_sitze;
	spritverbrauch = other.spritverbrauch;
	tankinhalt = other.tankinhalt;
	tankgroesse = other.tankgroesse;
}
// Destruktor
~Auto() 
{
	cout << "Auto wurde zerstört." << endl;
}
// getter
int get_radzahl() { return radzahl; }
string get_farbe() { return farbe; }
int get_ps() { return ps }
int get_anzahl_sitze() { return anzahl_sitze; }
float get_spritverbrauch() { return spritverbrauch; }
float get_tankinhalt() { return tankinhalt; }
float get_tankgroesse() { return tankgroesse; }
//setter
set_tankinhalt(float tank) 
{
	x = tankinhalt + tank
		if (x > tankgroesse) {
			tankinhalt = tankgroesse
		}
		else {
			tankinhalt = x
		}
}
// Methode
float fahren(float strecke) 
{
tankinhalt_neu = ((tankinhalt - (spritverbrauch / 100.f)) * strecke);
if tankinhalt_neu >= 0
		return strecke;
	else
		return strecke - (tankinhalt_neu / (spritverbrauch / 100.f))

}



