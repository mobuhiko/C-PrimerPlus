// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;
// function prototypes
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);  // don't change data
void revalue(double r, double ar[], int n);

double * fill_array_2(double * begin_ar, double * end_ar);
void show_array_2(const double * begin_ar, double * end_ar);  // don't change data
void revalue_2(double r, double * begin_ar, double * end_ar);

int main()
{
    using namespace std;
    double properties[Max];
    double * size = fill_array_2(properties, properties+Max);
    show_array_2(properties, size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue_2(factor, properties, size);
        show_array_2(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "Bad input; input process terminated.\n";
        }
        else if (temp < 0)     // signal to terminate
            break;
        ar[i] = temp;
    }
    return i;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}

double * fill_array_2(double * begin_ar, double * end_ar)
{
    using namespace std;
    double temp;
    double *p;
    int i = 0;
    for (p = begin_ar; p != end_ar; p++, i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "Bad input; input process terminated.\n";
        }
        else if (temp < 0)     // signal to terminate
            break;
        *p = temp;
    }
    return p;
}

void show_array_2(const double * begin_ar, double * end_ar)
{
    using namespace std;
    const double* temp;
    int i = 0;
    for (temp = begin_ar; temp != end_ar; temp++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *temp << endl;
        i++;
    }
}

void revalue_2(double r, double * begin_ar, double * end_ar)
{
    double* temp;
    for (temp = begin_ar; temp != end_ar; temp++)
    {
       *temp *= r;
    }
}
