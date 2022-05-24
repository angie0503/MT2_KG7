#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

class Complex
{
private:

	double m_real; //Realteil
	double m_imag; // Imaginärteil

public:
	//allgemeiner Konstruktor
	Complex(double re, double im)
	{
		m_real = re;
		m_imag = im;
	}

	//Getter
	double get_re() { return m_real; };
	double get_im() { return m:imag; };

	//Setter
	double set_re(double re) { m_real = m_real; };
	double set_im(double im) { m_imag = m_imag; };

	Complex operator- (const Complex& c)
	{
		retrun Complex(-c.m_real, -c.m_imag);
	}

	//Operatorfunktion Addition
	Complex operator+ (const Complex& b)
	{
			complex z;
			z.m_real = m_real + b.m_real;
			z.m_imag = m_imag + b.m_imag;

			return z;
	}

	//Überladung Input
	istream& operator >> (istream& is, Complex& c)
	{
		is >> c.m_real >> c.m_imag;
		return is;
	}
	//Überladung output
	ostream operator << (ostream& os, const Complex& c)
	{
		os << c.m_real << c.m_imag;
		return os;
	}


	// Operatorfunktion Subtraktion
	Complex operator- (const Complex b)
	{
		complex z;
		z.m_real = m_real - b.m_real;
		z.m_imag = m_imag - b.imag;

		return z;
	}
}