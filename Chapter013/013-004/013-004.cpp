#include <iostream>
#include "BOP.h"
#include "VintagePort.h"

using namespace std;

int main()
{
    Port wine1("Leonardo", "white", 15);
    Port wine2 = wine1;
    cout << "Now your wines are:\n";
    wine1.Show();
    wine2.Show();
    wine1 += 18;
    wine2 -= 6;
    cout << "After the change, your wines' bottles are:\n";
    cout << "Wine1: ";
    wine1.BottleCount();
    cout << "Wine2: ";
    wine2.BottleCount();
    cout << "And the conclusion is\n";
    cout << wine1 << endl;
    cout << wine2 << endl;
    cout << endl;
    cout << "Now your wines upgrade to VintagePort class.\n";
    VintagePort wine3("Elma", 21, "tww", 23);
    VintagePort wine4;
    (Port &)wine4 = (Port &)wine3;
    (VintagePort &)wine4 = (VintagePort &)wine3;
    cout << "Now the new wines are:\n";
    wine3.Show();
    wine4.Show();
    wine3 += 17;
    wine4 -= 5;
    cout << "After the change, your new wines' bottles are:\n";
    cout << "Wine3: ";
    wine3.BottleCount();
    cout << "Wine4: ";
    wine4.BottleCount();
    cout << "And the conclusion is\n";
    cout << wine3 << endl;
    cout << wine4 << endl;
    cout << endl;

    return 0;
}
