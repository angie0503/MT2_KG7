#pragma once
include <iostream>
using namespace std;


class Datum
{
private:
	int tag;
	int monat;
	int jahr;

pubic:
	static int IstSchaltjahr(int irgendeinJahr);
	void TagDesJahres(tag, monat, jahr, IstSchaltjahr);
	
	// allgemeiner Konstruktor
	Datum(int X, int Y, int Z)       
	



}