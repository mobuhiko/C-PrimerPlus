#include <iostream>
#include <string>
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

bool is_palindrome(string & str)
{
    //string rev_str = str;
    //reverse(rev_str.begin(), rev_str.end());
    string rev_str(str.rbegin(), str.rend());
    if(str == rev_str)
        return true;
    else
        return false;
}
