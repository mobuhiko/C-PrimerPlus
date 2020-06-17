#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout << "enter 10 donation\n";
    double donation[10];


    int counter = 0;
    int above_average_counter = 0;
    double average = 0;
    double sum = 0;

    for(int i = 0; i < 10; i++)
    {
        cin >> donation[i];
        if(cin.fail())
        {
            break;
        }
        sum += donation[i];
        counter++;
    }

    average = sum/counter;
    for(int i = 0; i < 10; i++)
    {
        if(donation[i] > average)
        {
            above_average_counter++;
        }
    }

    cout << "AVERAGE: " << average << endl;
    cout << above_average_counter << " donation above than average\n";

    return 0;
}
