#include<iostream>
#include<string>
using namespace std; 
#pragma once

class Auto
{
private:
	int radzahl;
	string farbe;
	int ps;
	int anzahl_sitze;
	float spritverbrauch;
	float tankinhalt;
	float tankgroesse;

public:

	float fahren(float strecke);



	//Standardkonstruktoren
	Auto();

	//allgemeiner Konstruktor
	Auto(int Radzahl, string Farbe, int PS, int Anzahl_Sitze, float Spritverbrauch, float Tankinhalt, float Tankgroesse);

	//Kopierkonstruktor
	Auto(const Auto& other);

	//Destruktor
	~Auto();

	//Getter
	int getradzahl();
	string getfarbe();
	int getps();
	int getanzahl_sitze();
	float getspritverbrauch();
	float gettankinhalt();
	float gettankgroesse();

	//Setter
	float settankinhalt();


};



