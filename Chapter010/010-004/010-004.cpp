#include "sales_def.h"
#include <iostream>

using namespace std;

int main()
{
    using namespace SALES;
    double ar[3] = {100, 200, 250};

    Sales s1 = Sales(ar, 3);
    Sales s2 = Sales();

    cout << endl;
    cout << "SALES[1]\n";
    s1.showSales();

    cout << endl;
    cout << "SALES[2]\n";
    s2.showSales();

    return 0;
}
