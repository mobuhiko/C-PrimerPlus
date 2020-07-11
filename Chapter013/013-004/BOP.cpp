#include <iostream>
#include"BOP.h"
#include <cstring>
using namespace std;

Port::Port(const char * br, const char * st, int b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port & p)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator=(const Port &p)
{
    Port port;
    port.brand = new char[strlen(p.brand) + 1];
    strcpy(port.brand, p.brand);
    strcpy(port.style, p.style);
    port.bottles = p.bottles;
    return port;
}

Port & Port::operator+=(int b)
{
    bottles += b;
}

Port & Port::operator-=(int b)
{
    bottles -= b;
}

void Port::Show() const
{
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}
