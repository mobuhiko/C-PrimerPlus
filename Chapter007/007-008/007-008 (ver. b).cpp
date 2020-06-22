/* Programming Exercises 007-009 (Version b) */
//arrobj.cpp -- functions with array objects (C++11)
#include <iostream>

using namespace std;

// constant data
const int Seasons = 4;
const char* season_names[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct s_season
{
    double expenses;
};

// function to modify array object
void fill_struct(s_season struct_name[], int ar_size);
// function that uses array object without modifying it
void show_struct(s_season struct_name[], int ar_size);

int main()
{
    struct s_season season_expenses[Seasons];
    fill_struct(season_expenses, Seasons);
    show_struct(season_expenses, Seasons);
    return 0;
}

void fill_struct(struct s_season struct_name[], int ar_size)
{
    for(int i = 0; i < ar_size; i++)
    {
        cout << "Enter the expense for " << season_names[i] << ": ";
        cin >> struct_name[i].expenses;
    }
}

void show_struct(struct s_season struct_name[], int ar_size)
{
    for(int i = 0; i < ar_size; i++)
    {
        cout << "Expense for " << season_names[i] << ": " << struct_name[i].expenses << endl;
    }
}
