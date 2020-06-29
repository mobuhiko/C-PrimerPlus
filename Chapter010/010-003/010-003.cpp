#include <iostream>
#include "golf.h"

using namespace std;

int main()
{


    golf g1;
    g1.showgolf();
    g1.resethandicap(120);
    g1.showgolf();

    golf g2("JIMMY", 100);
    g2.showgolf();
    g2.resethandicap(120);
    g2.showgolf();

    return 0;
}
