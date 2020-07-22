#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int reduce(long ar[], int n);

int main()
{
    array<long, 10> a{5,2,2,8,6,5,8,1,3,7};
    reduce(a,10);
    for(int i = 0; i < 10; ++i)
        cout << a[i] << ",";
    return 0;
}

int reduce(long ar[], int n)
{
    sort(ar.begin(), ar.end());
    unique(ar.begin(), ar.end());
    return n;
}
