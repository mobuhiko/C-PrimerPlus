#include <iostream>
#include "move_def.h"
using namespace std;

int main()
{
    Move origin;
    cout << "Orgin = ";
    origin.showmove();
    cout << endl;

    Move new1(1,1);
    cout << "Orgin = ";
    origin.showmove();
    cout << "New1 = ";
    new1.showmove();
    cout << endl;

    origin = origin.add(new1);
    cout << "Orgin + New1= ";
    origin.showmove();
    cout << endl;

    origin.reset(7,7);
    cout << "Reset Orgin = ";
    origin.showmove();
    origin = origin.add(new1);
    cout << "Reset Orgin + New1 = ";
    origin.showmove();
    origin.reset(0, 0);
    cout << "Orgin = ";
    origin.showmove();
    return 0;
}
