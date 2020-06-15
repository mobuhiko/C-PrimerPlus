#include <iostream>

using namespace std;

int main()
{
    cout << "enter 2 int numbers\n";
    int a, b;
    cin >> a;
    cin >> b;

    int min,max;
    if(a > b)
    {
        min = b;
        max = a;
    }else if(a <= b)
    {
        min = a;
        max = b;
    }

    int sum = 0;
    for(min;min != max;min++){
        sum += min;
    }

    cout << "the sum from " << a << " to " << b << " is " << sum <<endl;

    return 0;
}
