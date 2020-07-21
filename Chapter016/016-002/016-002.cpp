#include <iostream>
#include <string>
#include <cctype>
//#include <algorithm>
using namespace std;

bool is_palindrome(const string& str);

int main()
{
    cout << "enter something\n";
    string input;
    getline(cin, input);
    while (input.size() > 0)
    {
        if (is_palindrome(input))
            cout << input << " is a palindrome\n";
        else
            cout << input << " is NOT a palindrome\n";
        cout << "enter something\n";
        getline(cin, input);
    }
    cout << "Bye!\n";
    return 0;
}

bool is_palindrome(const string& str)
{
    string temp_str = str;
    for (auto i = temp_str.begin(); i != temp_str.end();)
    {
        if (!isalpha(*i))
        {
            i = temp_str.erase(i);
            continue;
        }
        else
        {
            *i = tolower(*i);
            ++i;
        }
    }

    string rev_str(temp_str.rbegin(), temp_str.rend());
    if (temp_str == rev_str)
        return true;
    else
        return false;
}
