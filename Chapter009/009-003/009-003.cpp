// static.cpp -- using a static local variable
#include <iostream>
#include <new>
#include <string>
#include <cstring>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main()
{

    chaff* pd1 = new (buffer) chaff[N]; // use buffer array
    chaff* pd2 = new chaff[N]; // use array

    char dross[20];
    int slag = 0;

    for(int i = 0; i < N; i++)
    {
        cout << "Chaff#" << i + 1 << endl;;
        cout << "Enter the dross: ";
        cin.getline(dross, 20);
        cout << "Enter the slag: ";
        cin >> slag;
        cin.get();
        strcpy(pd1[i].dross, dross);
        pd1[i].slag = slag;
        strcpy(pd2[i].dross, dross);
        pd2[i].slag = slag;
    }

    // show struct
    cout << endl;
    cout << "BUFFER VERSION\n";
    for(int i = 0; i < 5; ++i)
    {
        cout << pd1[i].dross << ": " << pd1[i].slag << endl;
    }

    cout << endl;
    cout << "ARRAY VERSION\n";
    for(int i = 0; i < 5; ++i)
    {
        cout << pd1[i].dross << ": " << pd1[i].slag << endl;
    }

    delete [] pd1;
    delete [] pd2;
}
