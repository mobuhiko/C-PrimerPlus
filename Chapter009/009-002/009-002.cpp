// static.cpp -- using a static local variable
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
// function prototype
void strcount(const string str);

int main()
{

    string input;
    char next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const string str)
{
    using namespace std;
    static int total = 0;        // static local variable
    int count = str.length();               // automatic local variable
    cout << "\"" << str <<"\" contains ";
    cout << count << " characters\n";

    total += count;
    cout << total << " characters total\n";
}
