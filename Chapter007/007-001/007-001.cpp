#include <iostream>

using namespace std;

double average(double x, double y);

int main()
{

    double a, b;
    do
    {
        cout << "enter 2 numbers\n";
        cout << "a? ";
        cin >> a;
        cout << "b? ";
        cin >> b;
        double answer = average(a, b);
        cout << "ANSWER: " << answer << endl;
    }while(a != 0 && b != 0);
    
    cout << "BYE!!"

    return 0;
}

double average(double x, double y)
{
    double result = 2.0*x*y/(x+y);
    return result;
}
