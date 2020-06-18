#include <iostream>
#include <cctype>
#include <string>

using namespace std;

struct donation
{
    string name;
    double money;
};
int main()
{
    int number;
    cout << "How many patrons? ";
    cin >> number;

    donation* patron_list = new donation [number];
    for(int i = 0; i < number; i++)
    {
        cout << "Patron " << i+1 << endl;
        cout << "Name? ";
        cin.get();
        getline(cin, patron_list[i].name);
        cout << "Money? ";
        cin >> patron_list[i].money;
        if(cin.fail()){
            patron_list[i].money = 0;
            cout << endl; // ???????
        }
    }
    cout << endl;

    cout << "Grand Patrons\n";
    int gp_counter = 0;
    for(int i = 0; i < number; i++)
    {
        if(patron_list[i].money >= 10000)
        {
            gp_counter++;
            cout << patron_list[i].name << endl;
        }
    }
    if(gp_counter == 0)
    {
        cout << "none\n";
    }
    cout << endl;

    cout << "Patrons\n";
    int p_counter = 0;
    for(int i = 0; i < number; i++)
    {
        if(patron_list[i].money < 10000)
        {
            p_counter++;
            cout << patron_list[i].name << endl;
        }
    }
    if(p_counter == 0)
    {
        cout << "none\n";
    }
    cout << endl;

    delete [] patron_list;
    return 0;
}
