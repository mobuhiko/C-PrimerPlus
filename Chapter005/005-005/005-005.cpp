#include <iostream>

using namespace std;

int main()
{
    char* month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sales_vol[12];
    int total_vol = 0;

    for(int i = 0; i < 12; i++ )
    {
        cout << "Please enter the sales volume of " << month[i] << endl;
        cin >> sales_vol[i];
        total_vol += sales_vol[i];
    }
    cout << "Sales volume of the year: " << total_vol;
    return 0;
}
