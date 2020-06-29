#include <iostream>
#include "golf.h"

using namespace std;

int main()
{
    golf golf_member[5];
    setgolf(golf_member[0], "Ann Birdfree", 24);

    int count = 1;
    for(int i = 1; i < 5; ++i)
    {
        if(setgolf(golf_member[i]) == 0)
        {
            break;
        }
        count++;
    }

    char answer = 0;
    while(answer != 'n')
    {
        int golf_number;
        cout << "Enter the # you want to reset the score: ";
        cin >> golf_number;
        if(golf_number > count)
        {
            cout << "INVALID.The program will shutdown\n";
            break;
        }
        else
        {
            cout << "Please enter the score: ";
            cin >> golf_member[golf_number].handicap;
        }

        cout << "do you want to continue to reset? (y/n): ";
        cin >> answer;
    }

    for(int i = 0; i < count; ++i)
    {
        showgolf(golf_member[i]);
    }

    return 0;
}
