#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

class Complex {
private:
  

public:
     // Attribute
    double re; //Realteil   
    double im; //Imaginärteil


    // Methoden
    Complex();
    Complex(double r, double i);
    ~Complex();
    double abs();
    double phi();
    Complex operator+(Complex b);
    Complex operator+(double b);
    Complex operator-(Complex b);
    Complex operator-(double b);
    Complex operator*(Complex b);
    Complex operator*(double b);
    Complex operator/(Complex b);
    Complex operator/(double b);
};

Complex operator+(double a, Complex b);
Complex operator-(double a, Complex b);
Complex operator*(double a, Complex b);
Complex operator/(double a, Complex b);