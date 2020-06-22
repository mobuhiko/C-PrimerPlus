#include <iostream>

using namespace std;

int ar_size = 10;

void Fill_array(double ar[], int& size_of_ar);
void Show_array(const double ar[], const int size_of_ar);
void Reverse_array(double ar[], const int size_of_ar);

int main()
{
    double ar_1[ar_size];
    Fill_array(ar_1, ar_size);
    Show_array(ar_1, ar_size);
    Reverse_array(ar_1, ar_size);
    Show_array(ar_1, ar_size);

    // special reverse
    double temp[ar_size];
    temp[0] = ar_1[0];
    temp[ar_size - 1] = ar_1[ar_size - 1];
    for(int i = 1; i < ar_size - 1; i++)
    {
        temp[ar_size - i - 1] = ar_1[i];
    }
    for(int j = 0; j < ar_size; j++)
    {
        ar_1[j] = temp[j];
    }
    Show_array(ar_1, ar_size);

    return 0;
}

void Fill_array(double ar[], int& size_of_ar)
{
    int counter = 0;
    for(int i = 0; i < ar_size;i++)
    {
        cout << "Enter a number: ";

        if(cin >> ar[i])
        {
            counter++;
        }
        else
        {
            size_of_ar = counter;
            break;
        }
    }
    cout << counter << " numbers are input\n";
}

void Show_array(const double ar[], const int size_of_ar)
{
    for(int i = 0; i < size_of_ar; i++)
    {
        cout << "#" << i + 1 << ": " << ar[i] << endl;
    }
    cout << endl;
}

void Reverse_array(double ar[], const int size_of_ar)
{
    double temp[size_of_ar];
    for(int i = 0; i < size_of_ar; i++)
    {
        temp[size_of_ar - i - 1] = ar[i];
    }

    for(int j = 0; j < size_of_ar; j++)
    {
        ar[j] = temp[j];
    }
}
