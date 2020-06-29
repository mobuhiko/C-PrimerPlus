#include "sales_def.h"
#include <iostream>

using namespace std;

int main()
{
    SALES::Sales sales[2];
    double ar[3] = {100, 200, 250};

    SALES::setSales(sales[0], ar, 3);
    SALES::setSales(sales[1]);

    cout << endl;
    cout << "SALES[1]\n";
    SALES::showSales(sales[0]);

    cout << endl;
    cout << "SALES[2]\n";
    SALES::showSales(sales[0]);

    return 0;
}
