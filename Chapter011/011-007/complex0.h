#ifndef COMPLEX0_H_INCLUDED
#define COMPLEX0_H_INCLUDED
#include <iostream>
using namespace std;
class Complex
{
public:
    Complex();
    Complex(double x, double y);
    ~Complex();
    friend Complex operator+(const Complex & a, const Complex & b);
    friend Complex operator-(const Complex & a, const Complex & b);
    friend Complex operator*(const Complex & a, const Complex & b);
    friend Complex operator*(const Complex & a, const double b);
    friend Complex operator~(const Complex & a);
    friend ostream & operator<<(std::ostream & os, const Complex & c);
    friend istream & operator>>(std::istream & is, Complex & c);
private:
    double real;
    double imaginary;
};


#endif // COMPLEX0_H_INCLUDED
