#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

class Complex
{
private:

	double real; //Realteil
	double imag; // Imaginärteil

public:
	//allgemeiner Konstruktor
	Complex(double re, double im)
	{
		real = re;
		imag = im;
	}

	//Getter
	double get_re() { return real; };
	double get_im() { return imag; };

	//Setter
	double set_re(double re) { real = real; };
	double set_im(double im) { imag = imag; };

	//Operatorfunktion Addition
	Complex operator+ (Complex b)
	{
			complex z;
			z.real = real + b.real;
			z.imag = imag + b.imag;

			return z;
	}

	// Operatorfunktion Subtraktion
	Complex operator- (Complex b)
	{
		complex z;
		z.real = real - b.real;
		z.imag = imag - b.imag;

		return z;
	}
}