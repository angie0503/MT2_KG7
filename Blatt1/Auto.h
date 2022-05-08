#include<iostream>
#include<string>
using namespace std; 
#pragma once

class Auto {
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
	Auto() 

	//allgemeiner Konstruktor
	Auto(int radzahl,string farbe,int ps,int anzahl_sitze,float spritverbrauch,float tankinhalt,float tankgroesse) 
		:m_radzahl(radzahl), m_farbe(farbe), m_ps(ps),m_anzahl_sitze(anzahl_sitze),m_spritverbrauch(spritverbrauch),m_tankinhalt(tankinhalt),m_tankgroesse(tankgroesse){}

	//Kopierkonstruktor
	Auto(const Auto& other)
		// Destruktor
		~Auto()

	// getter
	int get_radzahl();
	string get_farbe();
	int get_ps();
	int get_anzahl_sitze();
	float get_spritverbrauch();
	float get_tankinhalt();
	float get_tankgroesse()

	//setter

	set_tankinhalt(float tank)

	// Methode

	float fahren(float strecke) 
}






