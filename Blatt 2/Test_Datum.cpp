#include <iostream>
#include "Klasse_Datum.h"
using namespace std;

int main()
{
	int tag_ein;
	int monat_ein;
	int jahr_ein;

	cout << "Hallo! Bitte geben Sie ein neues Datum ein:" << endl;
	cout << "Tag?" << endl;
	cin >> tag_ein;
	cout << "Monat?" << endl;
	cin >> monat_ein;
	cout << "Jahr?" << endl;
	cin >> jahr_ein;

	Datum DatumTest = Datum(tag_ein, monat_ein, jahr_ein);
	cout << "Das erstelle Datum ist " << DatumTest.getTag() << "." << DatumTest.getMonat() << "." << DatumTest.getJahr() << endl;
	cout << "Es ist der " << DatumTest.TagDesJahres(DatumTest.getTag(), DatumTest.getMonat(), DatumTest.getJahr()) << "te Tag im Jahr." << endl;

	if (DatumTest.IstSchaltjahr(DatumTest.getJahr()) == 1) 
	{
		cout << "Dieses Jahr ist ein Schaltjahr." << endl;
	}
	else 
	{
		cout << "Dieses Jahr ist kein Schaltjahr." << endl;
	}


}