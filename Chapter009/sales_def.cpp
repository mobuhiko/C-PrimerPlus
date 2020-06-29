 #include <iostream>
 #include "sales_def.h"

 using namespace std;
 namespace SALES
 {
    // copies the lesser of 4 or n items from the array ar
    // to the sales member of s and computes and stores the
    // average, maximum, and minimum values of the entered items;
    // remaining elements of sales, if any, set to 0
    void setSales(Sales & s, const double ar[], int n)
    {
        int count = 0;
        if(4 <= n)
        {
            count = 4;
        }
        else
        {
            count = n;
        }

        for(int i = 0; i < 4; ++i)
        {
            if(i < count)
            {
                s.sales[i] = ar[i];
            }
            else
            {
                s.sales[i] = 0;
            }
        }

        double total_sales = 0;
        s.max = s.sales[0];
        s.min = s.sales[0];
        for(int i = 0; i < count; ++i)
        {
            total_sales += s.sales[i];
            if(s.sales[i] > s.max)
            {
                s.max = s.sales[i];
            }
            else if(s.sales[i] < s.min)
            {
                s.min = s.sales[i];
            }
            else
            {
                ;
            }
        }
        s.average = total_sales / QUARTERS;
    }

    // gathers sales for 4 quarters interactively, stores them
    // in the sales member of s and computes and stores the
    // average, maximum, and minimum values
    void setSales(Sales & s)
    {
        for(int i = 0; i < QUARTERS; ++i)
        {
            cout << "Quarter #" << i + 1 << ": \n";
            cout << "Sales: ";
            cin >> s.sales[i];
        }

        double total_sales = 0;
        s.max = s.sales[0];
        s.min = s.sales[0];
        for(int i = 0; i < QUARTERS; ++i)
        {
            total_sales += s.sales[i];
            if(s.sales[i] > s.max)
            {
                s.max = s.sales[i];
            }
            else if(s.sales[i] < s.min)
            {
                s.min = s.sales[i];
            }
            else
            {
                ;
            }
        }
        s.average = total_sales / QUARTERS;
    }

    // display all information in structure s
    void showSales(const Sales & s)
    {
        for(int i = 0; i < QUARTERS; ++i)
        {
            cout << "Quarter#" << i + 1 << ": \n";
            cout <<  s.sales[i] << endl;
        }
        cout << "AVERAGE: " << s.average << endl;
        cout << "MAX: " << s.max << endl;
        cout << "MIN: " << s.min << endl;
        cout << endl;
    }
}

