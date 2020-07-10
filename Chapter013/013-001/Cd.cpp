#include "Cd.h"
#include <iostream>
#include <cstring>
using namespace std;

Cd::Cd(char * s1, char * s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    strcpy(performers, "NULL");
    strcpy(label, "NULL");
    selections = 0;
    playtime = 0;
}

Cd::~Cd()
{
    ;
}

void Cd::Report() const  // reports all CD data
{
    cout << performers << endl;
    cout << label << endl;
    cout << selections << endl;
    cout << playtime << endl;
}

Cd & Cd::operator=(const Cd & d)
{
    Cd cd;
    strcpy(cd.performers, d.performers);
    strcpy(cd.label, d.label);
    cd.selections = d.selections;
    cd.playtime = d.playtime;
    return cd;
}
