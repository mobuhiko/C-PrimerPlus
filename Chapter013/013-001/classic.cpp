#include "classic.h"
#include <iostream>
#include <cstring>
using namespace std;

Classic::Classic(char * s1, char * s2, char * s3, int n, double x) : Cd(s1, s2, n, x)
{
    strcpy(mainworks, s3);
}

Classic::Classic() : Cd()
{
    strcpy(mainworks, "NULL");
}

Classic::~Classic()
{
    ;
}

void Classic::Report() const
{
    Cd::Report();
    cout << mainworks << endl;
}

Classic & Classic::operator=(const Classic & d)
{
    Classic classic;
    Cd::operator=(d);
    strcpy(mainworks, d.mainworks);
    return classic;

}



