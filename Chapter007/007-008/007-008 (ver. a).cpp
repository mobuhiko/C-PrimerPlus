/* Programming Exercises 007-009 (Version a) */
//arrobj.cpp -- functions with array objects (C++11)
#include <iostream>

using namespace std;

// constant data
const int Seasons = 4;
const char* season_names[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
// function to modify array object
void fill_array(double ar[], int ar_size);
// function that uses array object without modifying it
void show_array(double ar[], int ar_size);

int main()
{
    double season_expenses[Seasons];
    fill_array(season_expenses, Seasons);
    show_array(season_expenses, Seasons);
    return 0;
}

void fill_array(double ar[], int ar_size)
{
    for(int i = 0; i < ar_size; i++)
    {
        cout << "Enter the expense for " << season_names[i] << ": ";
        cin >> ar[i];
    }
}

void show_array(double ar[], int ar_size)
{
    for(int i = 0; i < ar_size; i++)
    {
        cout << "Expense for " << season_names[i] << ": " << ar[i] << endl;
    }
}
