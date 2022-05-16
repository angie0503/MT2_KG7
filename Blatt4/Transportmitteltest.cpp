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
	
	return 0;
}