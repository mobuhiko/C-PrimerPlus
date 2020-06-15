#include <iostream>

using namespace std;

int main()
{
    char* month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sales_vol[3][12];
    int total_vol[3] = {0, 0, 0};

    for(int i = 0; i < 3; i++)
    {
        cout << "\nYear " << i+1 << ": \n";
        for(int j = 0; j < 12; j++ )
            {
                 cout << "Please enter the sales volume of " << month[j] << endl;
                 cin >> sales_vol[i][j];
                 total_vol[i] += sales_vol[i][j];
            }
        cout << "Sales volume of year " << i + 1 << ": " << total_vol[i] << endl;
    }

    int total = 0;
    for(int i = 1; i < 3; i++)
    {
        total += total_vol[i];
    }
    cout << "Total sales volume of 3 years: " << total << endl;

    return 0;
}
