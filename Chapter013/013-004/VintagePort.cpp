#include "VintagePort.h"
#include <cstring>

VintagePort::VintagePort() : Port()
{
    nickname = new char[4+1];
    strcpy(nickname, "NONE");
    year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char *nn, int y) : Port(br, nn, b)
{
    nickname = new char[strlen(nn)+1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp)
{
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    VintagePort vintageport;
    Port::operator=(vp);
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);
    vintageport.year = vp.year;
    return vintageport;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "Year: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
    os << (const Port &) vp;
    os << ", " << vp.year;
    return os;
}
