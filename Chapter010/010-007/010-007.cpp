#include <plorg.h>
#include <iostream>

using namespace std;

int main()
{
    Plorg plorg_1;
    cout << "the default plorg: \n";
    plorg_1.show_plorg();

    plorg_1.plorg_change_CI();
    cout << endl;

    plorg_1.plorg_change_name();
    cout << endl;
    return 0;
}
