#include<iostream>
#include<string>
#include "Auto.h"
using namespace std;

inint main() {
	Auto Seat;
	Seat.set_tankinhalt(10);
	x = Seat.get_tankinhalt();
	cout << x;

	Auto Audi = Auto(4, "schwarz", 200, 5, 5, 40, 60);
	cout << Audi.get_radzahl(), Audi.get_farbe(), Audi.get_ps(), Audi.get_anzahl_sitze(), Audi.get_spritverbrauch(), Audi.get_tankgroesse, Audi.get_tankinhalt();

	Auto VW = VW();
	cout << VW.fahren(200);

}


