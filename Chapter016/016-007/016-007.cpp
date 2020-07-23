#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

vector<int> lotto(int all_dots, int selected_random_dots);
bool is_same_element(vector<int> array, int target);

int main()
{
    unsigned int all_d;
    cout << "how many dots in your lottory card: ";
    cin >> all_d;

    unsigned int selected_d;
    cout << "how many dots should be selected: ";
    cin >> selected_d;
    while(selected_d)
    {
        // 0, segment fault
        if((selected_d <= all_d) && (selected_d > 0))
        {
            break;
        }
        else
        {
            cout << "please enter a number less than that and greater than 1\n";
            cout << "how many dots should be selected: ";
            cin >> selected_d;
            continue;
        }
    }

    //initialize all elements to 0 - an invalid number
    vector<int> choice(selected_d);
    for(int i = 0; i < selected_d; ++i)
        choice[i] = 0;

    for(int i = 0; i < selected_d; ++i)
    {
        int temp;
        cout << "which numbers did you choose?\n";
        cin >> temp;
        while(temp)
        {
            // 0, passed?
            if(temp == 0)
            {
                cout << "Error. Please enter again.\n";
                cout << "which numbers did you choose?\n";
                cin >> temp;
                continue;
            }
            
            if((temp > all_d))
            {
                cout << "Error. Please enter again.\n";
                cout << "which numbers did you choose?\n";
                cin >> temp;
                continue;
            }
            else if(is_same_element(choice, temp))
            {
                cout << "Error. Please enter again.\n";
                cout << "which numbers did you choose?\n";
                cin >> temp;
                continue;
            }
            else
            {
                break;
            }
        }
        choice[i] = temp;
    }

    vector<int> t_number = lotto(all_d, selected_d);
    cout << "Today's number is: \n";
    for(auto i = t_number.begin(); i != t_number.end(); ++i)
        cout << *i << " ";
    cout << endl;

    cout << "Your number is: \n";
    for(auto i = choice.begin(); i != choice.end(); ++i)
        cout << *i << " ";
    cout << endl;

    int atari = 0;
    for(int i = 0; i < selected_d; ++i)
    {
        for(int j = 0; j < selected_d; ++j)
            if(choice[i] = t_number[j])
                atari++;
    }
    cout << atari << " numbers are same\n";
    return 0;
}

vector<int> lotto(int all_dots, int selected_random_dots)
{
    vector<int> card(all_dots);
    for(int i = 0; i < all_dots; ++i)
        card[i] = i + 1;

    random_shuffle(card.begin(), card.end());

    vector<int> selected(selected_random_dots);
    for(int i = 0; i < all_dots; ++i)
        selected[i] = card[i];

    return selected;
}

bool is_same_element(vector<int> array, int target)
{
    for(auto i = array.begin(); i != array.end(); ++i)
    {
        if(target == *i)
            return true;
    }
    return false;
}
