#include <plorg.h>
#include <iostream>>

using namespace std;

Plorg::Plorg()
{
    m_name = {'P','l','o','r','g','a'};
    m_CI = 50;
}

void Plorg::plorg_change_CI()
{
    cout << "new CI?\n";
    cin >> m_CI;
    cout << endl;
    show_plorg();
}

void Plorg::show_plorg()
{
    cout << m_name << endl;
    cout << m_CI << endl;
}

void Plorg::plorg_change_name()
{
    cout << "new name?\n";
    cin >> m_name;
    cout << endl;
    show_plorg();
}
