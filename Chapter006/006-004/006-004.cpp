#include <iostream>
#include <cctype>

using namespace std;

const int strsize = 100;
struct bop
{
    char fullname[strsize]; // real name
    char title[strsize]; // job title
    char bopname[strsize]; // secret BOP name
    int preference; // 0 = fullname, 1 = title, 2 = bop name
};

int main()
{
    struct bop member[5] =
    {
        {"Wimp Macho", "Junior Programmer", "WIZZARD", 0},
        {"Raki Rhodes", "Junior Programmer", "PIEPPER", 1},
        {"Celia Laiter", "Analyst Trainee", "MIPS", 2},
        {"Hoppy Hipman", "Senior Programmer", "BEAST", 0},
        {"Pat Hand", "CEO", "LOOPY", 2}
    };

    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name     b. display by title\n";
    cout << "c. display by bopname  d. display by preference\n";
    cout << "q. quit\n";

    char choice;
    cout << "Enter your choice: ";
    cin >> choice;
    while(choice != 'q')
    {
        switch(choice)
        {
        case 'a':
            for(int i = 0; i < 5; i++)
            {
                cout << member[i].fullname <<endl;
            }
            break;
        case 'b':
            for(int i = 0; i < 5; i++)
            {
                cout << member[i].title <<endl;
            }
            break;
        case 'c':
            for(int i = 0; i < 5; i++)
            {
                cout << member[i].bopname <<endl;
            }
            break;
        case 'd':
            for(int i = 0; i < 5; i++)
            {
                if(member[i].preference == 0)
                {
                    cout << member[i].fullname <<endl;
                }
                else if(member[i].preference == 1)
                {
                    cout << member[i].title <<endl;
                }
                else if(member[i].preference == 2)
                {
                    cout << member[i].bopname <<endl;
                }
            }
            break;
        default:
            cout << "ERROR\n";
            return main();
        }
        cout << "Next choice: ";
        cin >> choice;
    }
    cout << "Bye!\n";

    return 0;
}
