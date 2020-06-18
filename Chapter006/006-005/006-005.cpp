#include <iostream>
#include <cctype>

using namespace std;
const float tax_1 = 0; // under 5000
const float tax_2 = 0.1; // 5001 - 15000
const float tax_3 = 0.15; // 15001 - 35000
const float tax_4 = 0.2; // above 35000

int main()
{
    float income;
    float tax = 0;
    cout << "enter your income: ";

    while(cin >> income)
    {
        if(income <= 5000 && income >= 0)
        {
            tax = income*tax_1;
        }
        else if(income <= 15000)
        {
            tax = (income - 5000)*tax_2 + (5000 - 0)*tax_1;
        }
        else if(income <= 35000)
        {
            tax = (income - 15000)*tax_3 + (15000 - 5000)*tax_2 + (5000 - 0)*tax_1;

        }
        else if(income > 35000)
        {
            tax = (income - 35000)*tax_4 + (35000-15000)*tax_3 + (15000 - 5000)*tax_2 + (5000 - 0)*tax_1;
        }
        else
        {
            cout << "ERROR(1)\n";
        }

        cout << "INCOME: " << income << endl;
        cout << "TAX: " << tax << endl;

        cout << "enter your income: ";
    }

    if(cin.fail())
    {
        cout << "ERROR(2)\n";
    }

    return 0;
}
