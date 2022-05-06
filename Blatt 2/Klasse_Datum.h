#pragma once
using namespace std;

class Datum
{
private:
	int tag;
	int monat;
	int jahr;


public:

	//Methoden
	static int IstSchaltjahr(int irgendeinSchaltjahr);

	static int TagDesJahres(int tag, int monat, int jahr);

	//allgemeiner Konstruktor
	Datum(int X, int Y, int Z)
	{
		tag = X;
		monat = Y;
		jahr = Z;
	}


	//Getter
	int getTag() const { return tag; }
	int getMonat() const { return monat; }
	int getJahr() const { return jahr; }

};




