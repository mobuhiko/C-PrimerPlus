#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int reduce(long ar[], int n);

int main()
{
    long a[10] = { 5,2,2,8,6,5,8,1,3,7 };
    for (int i = 0; i < 10; ++i)
        cout << a[i] << "  ";
    cout << endl;

    int new_n = reduce(a, 10);
    for (int i = 0; i < 10; ++i)
        cout << a[i] << "  ";
    cout << endl;

    cout << new_n;
    return 0;
}

int reduce(long ar[], int n)
{
    sort(ar, ar+n);
    unique(ar, ar+n);

    int new_n = 0;
    for (int i = 0; i < n; ++i)
    {
        if (ar[i] < ar[i + 1])
            new_n++;
    }
    return new_n;
}
