#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <random>
#include <ctime>

using namespace std;

const int NUM = 100000;

int main()
{
   
    // if just vi0, the boarder is not determined, then there will be segmentation fault
    vector<int> vi0(NUM); 
    for(int i = 0; i < NUM; ++i)
        vi0[i] = rand();

    vector<int> vi(vi0);
    list<int> li(vi0.begin(), vi0.end());

    clock_t start1 = clock();
    sort(vi.begin(), vi.end());
    clock_t end1 = clock();
    cout << "vi: ";
    cout << (double)(end1 - start1)/CLOCKS_PER_SEC << endl;

    clock_t start2 = clock();
    li.sort();
    clock_t end2 = clock();
    cout << "li: ";
    cout << (double)(end2 - start2)/CLOCKS_PER_SEC << endl;

    return 0;
}
