#pragma once
using namespace std;

class Datum
{
private:
	int tag;
	int monat;
	int jahr;
	static bool plappern;

public:

	//Methoden
	static int IstSchaltjahr(int irgendeinSchaltjahr);

	static int TdJ(int tag, int monat, int jahr);

	//allgemeiner Konstruktor
	
	Datum(int X, int Y, int Z)
	{
		tag = X;
		monat = Y;
		jahr = Z;
		if (plappern == true)
		{
			cout << "Allgemeiner Konstruktor aufgerufen\n" << endl;
		}
	}
	//Destruktor
	~Datum() {
		if (plappern == true)
		{
			cout << "Das Datum wurde gelöscht\n" << endl;
		}
	}

	//Getter
	int getTag() const { return tag; }
	int getMonat() const { return monat; }
	int getJahr() const { return jahr; }

};