#include<iostream>
#include<string>
#include "Auto.h"
using namespace std;


//Standardkonstruktor
Auto::Auto()
{
	radzahl = 4;
	farbe = "rot";
	ps = 70;
	anzahl_sitze = 5;
	spritverbrauch = 6;
	tankinhalt = 40;
	tankgroesse = 70;


}

// allgemeiner Kosntruktor
Auto::Auto(int Radzahl, string Farbe, int PS, int Anzahl_Sitze, float Spritverbrauch, float Tankinhalt, float Tankgroesse)
{
radzahl = Radzahl;
farbe = Farbe;
ps = PS;
anzahl_sitze = Anzahl_Sitze;
spritverbrauch = Spritverbrauch;
tankinhalt = Tankinhalt;
tankgroesse = Tankgroesse;

}

// Kopierkonstruktor
Auto::Auto(const Auto & other)
{
radzahl = other.radzahl;
farbe = other.farbe;
ps = other.ps;
anzahl_sitze = other.anzahl_sitze;
spritverbrauch = other.spritverbrauch;
tankinhalt = other.tankinhalt;
tankgroesse = other.tankgroesse;

}

//Destruktor
Auto::~Auto()
{

}

//Getter
int Auto::getradzahl()
{
	return radzahl; 
}

string Auto::getfarbe()
{
	return farbe;
}

int Auto::getps()
{
	return ps;
}

int Auto::getanzahl_sitze()
{
	return anzahl_sitze; 
}

float Auto::getspritverbrauch()
{
	return spritverbrauch;
}

float Auto::gettankgroesse()
{
	return tankgroesse;
}

float Auto::gettankinhalt()
{
	return tankinhalt;
}

//Setter

float Auto::settankinhalt()
{

	return tankinhalt;
}