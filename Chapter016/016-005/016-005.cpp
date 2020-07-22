#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
int reduce(T ar[], int n);

int main()
{
    long a[10] = { 5,2,2,8,6,5,8,1,3,7 };
    int new_a_n = reduce(a, 10);
    cout << new_a_n << endl; // 7

    string b[5] =
    {
        "Hello",
        "Good Morning",
        "bye",
        "Bye",
        "Hello"
    };
    int new_b_n = reduce(b, 5);
    cout << new_b_n << endl; // 4
    return 0;
}

template<typename T>
int reduce(T ar[], int n)
{
    sort(ar, ar+n);
    T* new_ar;
    new_ar = unique(ar, ar + n);
    
    int new_n = 0;
    for (int i = 0; i < n; ++i)
    {
        if (ar[i] < ar[i + 1])
            new_n++;
    }
    return new_n;
}
