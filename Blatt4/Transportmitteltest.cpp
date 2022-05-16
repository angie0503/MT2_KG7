#include <iostream>
#include <string>
#include <cstring>
#include <"Transportmittel.h">
using namespace std;

int main()
{
	transportmittel LKW = LKW(3, 2);
	cout << "Die H\x99he des Transportmittels betr\x84gt" << double get_hoehe << "m und die Breite" << double get_breite << "m \n" << endl;

	transportmittel Auto = Auto();
	cout <<"in Richtung" Auto.bewegen(norden) << "bewegen \n" << endl;
	
	wassertransportmittel 1 = 1(60, 3, 2);
	cout << "Die Bruttoregistertonnen betragen" << double get_bruttoregistertonnen << "Tonnen, die H\x99he des Transportmittels betr\x84gt" << double get_hoehe << "m" << "und die Breite" << double get_breite << "m \n" << endl;

	wassertransportmittel 2 = 2();
	cout << "Anlegehafen" 2.anlegen(amsterdamm) << "Ablegehafen" << 2.ablegen(hamburg) << "\n" << endl;

	landtransportmittel 3 = 3();
	cout << "Das Transportmittel kann" 3.fahren(500) << "km gefahren und" << 3.schieben(30) << "geschoben werden.\n"

	return 0;
}