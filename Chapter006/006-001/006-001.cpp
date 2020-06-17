#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << "enter something (enter @ to exit) \n";
    char input;
    cin.get(input);

    while(input != '@')
    {
        if(islower(input))
        {
            input = toupper(input);
        }else if(isupper(input))
        {
            input = tolower(input);
        }
        cout << input;
        cin.get(input);
    }

    return 0;
}
