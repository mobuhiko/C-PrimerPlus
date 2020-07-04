#include "complex0.h"
using namespace std;

Complex::Complex()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex(double x, double y)
{
    real = x;
    imaginary = y;
}

Complex::~Complex()
{
}

Complex operator+(const Complex & a, const Complex & b)
{
    Complex com;
    com.real = a.real + b.real;
    com.imaginary = a.imaginary + b.imaginary;
    return com;
}

Complex operator-(const Complex & a, const Complex & b)
{
    Complex com;
    com.real = a.real - b.real;
    com.imaginary = a.imaginary - b.imaginary;
    return com;
}

Complex operator*(const Complex & a, const Complex & b)
{
    Complex com;
    com.real = a.real * b.real - a.imaginary * b.imaginary;
    com.imaginary = a.imaginary * b.real + a.real * b.imaginary;
    return com;
}

Complex operator*(const Complex & a, const double b)
{
    Complex com;
    com.real = a.real * b;
    com.imaginary = a.imaginary * b;
    return com;
}

Complex operator~(const Complex & a)
{
    Complex com;
    com.real = a.real;
    com.imaginary = -a.imaginary;
    return com;
}

ostream & operator<<(std::ostream & os, const Complex & c)
{
    os << "(" << c.real << ", " << c.imaginary << ")\n";
    return os;
}

istream & operator>>(std::istream & is, Complex & c)
{
    cout << "REAL: ";
    is >> c.real;
    cout << "IMAGINARY: ";
    is >> c.imaginary;
    return is;
}
