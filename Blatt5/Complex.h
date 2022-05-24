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
	Complex(double re, double im);

	//Getter
	double get_re() { return re; };
	double get_im() { return im; };

	//Setter
	double set_re(double re) { real = re; };
	double set_im(double im) { imag = im; };

	//Operatorfunktion Addition
	Complex operator+ (Complex b);

	// Operatorfunktion Subtraktion
	Complex operator- (Complex b);
};