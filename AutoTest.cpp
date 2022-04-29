#include<iostream>
#include<string>
#include "Auto.h"
#include "Auto.cpp"
using namespace std;


int main()
{

	//Standard Objekt erstellen auf Stack
	Auto Auto1_Test = Auto();

	// Allgemeines Objekt erstellen auf Datensegment 
	static Auto Auto2_Test = Auto(4, "blau", 400, 2, 10, 80, 90);

	//Kopierobjekt erstellen auf Heap
	Auto* Kop_Auto3_Test = new Auto(Auto2_Test);


	cout << "Test Auto 1" << endl;
	cout << " Radzahl: " << Auto1_Test.getradzahl() << " Farbe: " << Auto1_Test.getfarbe() << " PS: " << Auto1_Test.getps() << " Anzahl der Sitze: " << Auto1_Test.getanzahl_sitze() << " Spritverbrauch: " << Auto1_Test.getspritverbrauch() << " Tankgroesse:" << Auto1_Test.gettankgroesse() << " Tankinhalt:" << Auto1_Test.gettankinhalt() << endl;

	cout << "Test Auto 2" << endl;
	cout << " Radzahl: " << Auto2_Test.getradzahl() << " Farbe: " << Auto2_Test.getfarbe() << " PS: " << Auto2_Test.getps() << " Anzahl der Sitze: " << Auto2_Test.getanzahl_sitze() << " Spritverbrauch: " << Auto2_Test.getspritverbrauch() << " Tankgroesse:" << Auto2_Test.gettankgroesse() << " Tankinhalt:" << Auto2_Test.gettankinhalt() << endl;
	
	cout << "Test Auto 3" << endl;
	cout << " Radzahl: " << Kop_Auto3_Test->getradzahl() << " Farbe: " << Kop_Auto3_Test->getfarbe() << " PS: " << Kop_Auto3_Test->getps() << " Anzahl der Sitze: " << Kop_Auto3_Test->getanzahl_sitze() << " Spritverbrauch: " << Kop_Auto3_Test->getspritverbrauch() << " Tankgroesse:" << Kop_Auto3_Test->gettankgroesse() << " Tankinhalt:" << Kop_Auto3_Test->gettankinhalt() << endl;

	cout << "Test Destruktor" << endl;
	delete Kop_Auto3_Test;
	cout << " PS: " << Kop_Auto3_Test->getps() << endl; // Wenn hier nicht der Wert für PS ausgegeben wird, funktioniert alles

	return 0;
}


