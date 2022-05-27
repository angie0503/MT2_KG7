#include "complex.h"
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

const double pi = 3.141592653589793;

int main()
{
	int main();
	{
		Complex b1 = Complex();
		cout << "b1 = " << b1 << endl;
		Complex b2 = Complex(3.0, 4.0);
		cout << "b2 = " << b2 << endl;

		Complex b3 = b1 + b2;
		cout << "b1 + b2 = " << b3 << endl;

		Complex b4 = b2 - b1;
		cout << "b2 - b1 = " << b4 << endl;

		return 0;
	}