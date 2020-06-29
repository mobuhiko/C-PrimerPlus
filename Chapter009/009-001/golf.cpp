#include "golf.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// non-interactive version:
//  function sets golf structure to provided name, handicap
//  using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

// interactive version:
//  function solicits name and handicap from user
//  and sets the members of g to the values entered
//  returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g)
{
    cout << "Enter the name: ";
    cin.getline(g.fullname, Len);
    cout << "Enter the handicap: ";
    cin >> g.handicap;
    cin.get();
    if(strcmp(g.fullname, "") == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// function resets handicap to new value
void handicap(golf & g, int hc)
{
    g.handicap = hc;
    return;
}

// function displays contents of golf structure
void showgolf(const golf & g)
{
    cout << g.fullname << ": " << g.handicap << "pts" << endl;
    return;
}
