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
	double get_im() { return m_imag; };

	//Setter
	double set_re(double re) { m_real = m_real; };
	double set_im(double im) { m_imag = m_imag; };

	Complex z1 ( double m_real , double m_imag)
	{
		Complex z1;
		z1 = m_real + m_imag;
		return z1 ;
	}

	Complex z2(double m_real, double m_imag)
	{
		Complex z2;
		z2 = m_real + m_imag;
		return z2;
	}

	//Operatorfunktion Addition
	Complex operator+ (const Complex& z1)
	{
			Complex z2;
			z2.m_real = m_real + z1.m_real;
			z2.m_imag = m_imag + z1.m_imag;

			return z2;
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
	Complex operator- (const Complex z1)
	{
		Complex z2;
		z2.m_real = m_real - z1.m_real;
		z2.m_imag = m_imag - z1.imag;

		return z2;
	}

	//Operatorfunktion Division
	Complex operator/ (const Complex& c1, const Complex& c2)
	{
		double m_real =
			(c2.m_real * c1.m_real + c2.m_imag * c1.m_imag) / (c2.m_imag * c2.m_imag + c1.m_imag * c1.m_imag);
		double m_imag =
			(c2.m_real * c1.m_real - c2.m_imag * c1.m_imag) / c2.m_imag * cw2.m_imag + c1.m_imag * c1.m_imag);

			return Complex(re, im);
	}

}