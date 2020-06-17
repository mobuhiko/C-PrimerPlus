#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout << "Please enter the following choices: \n";
    cout << "c) carnivore     p) pianinst\n";
    cout << "t) tree          g) game\n";

    char choice;
    cin >> choice;
    while(isalpha(choice))
    {
        switch(choice)
        {
        case 'c':
            cout << "A lion is carnivore\n";
            break;
        case 'p':
            cout << "He is a pianist\n";
            break;
        case 't':
            cout << "A maple is tree\n";
            break;
        case 'g':
            cout << "This is a game\n";
            break;
        default:
            cout << "Please enter c, p, t, or g: ";
            break;
        }
        if(choice == 'c' || choice == 'p' || choice == 't' || choice == 'g')
        {
            break;
        }
        cin >> choice;
        cout << endl;
    }

    return 0;
}
