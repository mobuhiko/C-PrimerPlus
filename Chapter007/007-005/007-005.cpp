#include <iostream>

using namespace std;

long unsigned factorial(unsigned int x);

int main()
{
    unsigned int number;
    cout << "Enter a number\n";
    while(cin >> number)
    {
        cout << factorial(number) << endl;
        cout << "Enter a number\n";
    }

    return 0;
}

long unsigned factorial(unsigned int x)
{
    long unsigned result;
    if(x == 0)
    {
        result = 1;
        return result;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
