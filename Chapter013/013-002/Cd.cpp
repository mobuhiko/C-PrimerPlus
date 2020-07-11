#include "Cd.h"
#include <iostream>
#include <cstring>
using namespace std;

Cd::Cd(char * s1, char * s2, int n, double x)
{
    performers = new char[strlen(s1)+1];
    strcpy(performers, s1);
    label = new char[strlen(s2)];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    performers = new char[strlen(d.performers)+1];
    strcpy(performers, d.performers);
    performers = new char[strlen(d.label)+1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = new char[4+1];
    strcpy(performers, "NULL");
    label = new char[4+1];
    strcpy(label, "NULL");
    selections = 0;
    playtime = 0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
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
    performers = new char[strlen(d.performers)+1];
    strcpy(cd.performers, d.performers);
    performers = new char[strlen(d.label)+1];
    strcpy(cd.label, d.label);
    cd.selections = d.selections;
    cd.playtime = d.playtime;
    return cd;
}
