#include <iostream>
#include <cstring>
using namespace std;

struct s_car
{
    string manufacturer;
    int year_made;
};

int main()
{
    int number = 0;
    cout << "How many cars do you wish to catalog? ";
    cin >> number;

    s_car* car = new s_car [number];
    for(int i = 0; i < number; i++)
    {
        cout << "Car #" << i + 1 <<endl;
        cout << "Please enter the make: ";
        cin.get();
        getline(cin, car[i].manufacturer);
        cout << "Please enter the year made: ";
        cin >> (car + i)->year_made;
    }

    cout << "Here is your collection: \n";
    for(int i = 0; i < number;i++)
    {
        cout << car[i].year_made << " " << car[i].manufacturer << endl;
    }

    delete [] car;

    return 0;
}
