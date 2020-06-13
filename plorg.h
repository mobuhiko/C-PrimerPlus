#ifndef PLORG_H_INCLUDED
#define PLORG_H_INCLUDED

#include <iostream>
#include <cstring>
#include <string.h>

class Plorg{
private:
    char m_name[20];
    int m_CI;
public:
    Plorg(); // required default plorg constructor
    void plorg_change_CI();
    void show_plorg();
    void plorg_change_name();
};

#endif // PLORG_H_INCLUDED
