#include <iostream>
using namespace std;

int main()
{
	char Buchstabe;
	int maskchar;

	cout << "Bitte Buchstabe eingeben.\n";
	cin >> Buchstabe;

	maskchar = 32;

	Buchstabe = Buchstabe ^ 32;

	cout << Buchstabe << endl;
	
}