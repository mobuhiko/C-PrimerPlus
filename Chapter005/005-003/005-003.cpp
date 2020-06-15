#include <iostream>

using namespace std;

int main()
{
    double sum = 0;
    double number;
    cout << "enter a number\n";
    cin >> number;
    while(number != 0)
    {
        sum += number;
        cout << "the sum is " << sum << " now.\n";
        cout << "enter a number\n";
        cin >> number;
    }
    return 0;
}
