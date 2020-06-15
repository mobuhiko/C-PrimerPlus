#include <iostream>

using namespace std;

int main()
{
    double daphne_principal = 100;
    double cleo_principal = 100;
    double daphne_total = 0;
    double cleo_total = 0;

    int year = 0;
    daphne_total = daphne_principal;
    cleo_total = cleo_principal;

    for(year = 1; daphne_total >= cleo_total; year++)
    {
        daphne_total += daphne_principal * 0.1;
        cleo_total += cleo_total * 0.05;
    }

    cout << "After " << year << " years\n";
    return 0;
}
