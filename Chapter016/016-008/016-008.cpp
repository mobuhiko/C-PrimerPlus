#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> mat_list;
    vector<string> pat_list;
    string temp;

    // Mat
    cout << "Mat: \n";
    cout << "Enter the name of your friend\n";
    while(getline(cin, temp))
    {
        mat_list.push_back(temp);
        cout << "continue to enter? (press 'y' to continue)\n";
        char selection;
        cin >> selection;
        cin.get();
        if(selection == 'y')
        {
            cout << "Enter the name of your friend\n";
            //getline(cin, temp)
            continue;
        }
        else
            break;
    }

    sort(mat_list.begin(), mat_list.end());

    cout << "Mat's friends: \n";
    for(auto i = mat_list.begin(); i != mat_list.end(); ++i)
        cout << *i << endl;
    cout << endl;

    // Pat
    cout << "Pat: \n";
    cout << "Enter the name of your friend\n";
    while(getline(cin, temp))
    {
        pat_list.push_back(temp);
        cout << "continue to enter? (press 'y' to continue)\n";
        char selection;
        cin >> selection;
        cin.get();
        if(selection == 'y')
        {
            cout << "Enter the name of your friend\n";
            //getline(cin, temp)
            continue;
        }
        else
            break;
    }

    sort(pat_list.begin(), pat_list.end());

    cout << "Pat's friends: \n";
    for(auto i = pat_list.begin(); i != pat_list.end(); ++i)
        cout << *i << endl;
    cout << endl;

    vector<string> total_list;
    total_list.insert(total_list.end(), mat_list.begin(), mat_list.end());
    total_list.insert(total_list.end(), pat_list.begin(), pat_list.end());

    sort(total_list.begin(), total_list.end());
    // unique retrurns the end iterator of unique part
    total_list.erase(unique(total_list.begin(), total_list.end()),total_list.end());
    cout << "List: \n";
    for(auto i = total_list.begin(); i != total_list.end(); ++i)
        cout << *i << endl;
    cout << endl;
    return 0;
}
