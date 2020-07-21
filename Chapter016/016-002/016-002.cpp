#include <iostream>
#include <string>
#include <cctype>
//#include <algorithm>
using namespace std;

bool is_palindrome(string & str);

int main()
{
    cout << "enter something\n";
    string input;
    getline(cin, input);
    while(input.size() > 0)
    {
        if(is_palindrome(input))
            cout << input << " is a palindrome\n";
        else
            cout << input << " is NOT a palindrome\n";
        cout << "enter something\n";
        getline(cin, input);
    }
    cout << "Bye!\n";
    return 0;
}

bool is_palindrome(const string & str)
{
    //string rev_str = str;
    //reverse(rev_str.begin(), rev_str.end());
    string temp_str = str;
    for(auto i = temp_str.begin(); i != temp_str.end();)
    {
        if(isalpha(str[i]))
        {
            i = temp_str.erase(i);
            continue;
        }
        else
        {
            i = tolower(i);
        }
    }

    string rev_str(rev_str.rbegin(), rev_str.rend());
    if(str == rev_str)
        return true;
    else
        return false;
}
