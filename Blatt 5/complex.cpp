#include "complex.h"
#include <cmath>

// Standard-Konstruktor
Complex::Complex()
{
    re = 0;
    im = 0;
}

// Konstruktor zum Setzen der komplexen Zahl
Complex::Complex(double r, double i)
{
    re = r;
    im = i;
}

// Destruktor
Complex::~Complex() {}


// Addition von zwei komplexen Zahlen
Complex Complex::operator+(Complex b)
{
    Complex s;

    s.re = re + b.re;
    s.im = im + b.im;

    return s;
}

// Subtraktion von zwei komplexen Zahlen
Complex Complex::operator-(Complex b)
{
    Complex s;

    s.re = re - b.re;
    s.im = im - b.im;

    return s;
}



// Multiplikation von zwei komplexen Zahlen
Complex Complex::operator*(Complex b)
{
    Complex s;

    s.re = re * b.re - im * b.im;
    s.im = re * b.im + b.re * im;

    return s;
}



// Division von zwei komplexen Zahlen
Complex Complex::operator/(Complex b)
{
    Complex s;
    double Nenner;

    Nenner = b.re * b.re + b.im * b.im;
    s.re = (re * b.re + im * b.im) / Nenner;
    s.im = (im * b.re - re * b.im) / Nenner;

    return s;
}

