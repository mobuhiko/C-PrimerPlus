#include "golf.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

golf::golf(const char* name, int handicap)
{
    strcpy(m_fullname, name);
    m_handicap = handicap;
}

golf::golf()
{
    char temp[Len];
    int hc;
    cout << "Enter the name: ";
    cin.getline(temp, Len);
    cout << "Enter the handicap: ";
    cin >> hc;
    *this = golf(temp, hc);
}

// function resets handicap to new value
void golf::resethandicap(int hc)
{
    m_handicap = hc;
    return;
}

// function displays contents of golf structure
void golf::showgolf()
{
    cout << m_fullname << ": " << m_handicap << "pts" << endl;
    return;
}
