#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include "Complex.h"
using namespace std;

int main()
{
	Complex c1 = Complex();
	cout << "c1 = " << c1 << endl;
	Complex c2 = Complex(3.0, 4.0);
	cout << "c2 = " << c2 << endl;

	Complex c3 = c1 + c2;
	cout << "c1 + c2 = " << c3 << endl;

	Complex c4 = c2 - c1;
	cout << "c2 - c1 = " << c4 << endl;

}