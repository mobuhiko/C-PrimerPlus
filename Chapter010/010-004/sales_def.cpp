 #include <iostream>
 #include "sales_def.h"

 using namespace std;
 namespace SALES
 {
    Sales::Sales(const double ar[], int n)
    {
        int count = 0;
        if(QUARTERS <= n)
        {
            count = QUARTERS;
        }
        else
        {
            count = n;
        }

        for(int i = 0; i < QUARTERS; ++i)
        {
            if(i < count)
            {
                sales[i] = ar[i];
            }
            else
            {
                sales[i] = 0;
            }
        }
    }

    Sales::Sales()
    {
        for(int i = 0; i < QUARTERS; ++i)
        {
            cout << "Quarter #" << i + 1 << ": \n";
            cout << "Sales: ";
            cin >> sales[i];
        }
    }

    // display all information in structure s
    void Sales::showSales()
    {
        for(int i = 0; i < QUARTERS; ++i)
        {
            cout << "Quarter#" << i + 1 << ": \n";
            cout <<  sales[i] << endl;
        }
        cout << "AVERAGE: " << Sales::average() << endl;
        cout << "MAX: " << Sales::max() << endl;
        cout << "MIN: " << Sales::min() << endl;
        cout << endl;
    }

    double Sales::average()
    {
        double total_sales = 0;
        for(int i = 0; i < QUARTERS; ++i)
        {
            total_sales += sales[i];
        }
        double average = total_sales / QUARTERS;
        return average;
    }

    double Sales::max()
    {
        double max = sales[0];
        for(int i = 0; i < QUARTERS; ++i)
        {
            if(sales[i] > max)
            {
                max = sales[i];
            }
        }
        return max;
    }

    double Sales::min()
    {
        double min = sales[0];
        for(int i = 0; i < QUARTERS; ++i)
        {
            if(sales[i] < min)
            {
                min = sales[i];
            }
        }
        return min;
    }
}
