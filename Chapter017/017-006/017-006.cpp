/* it is not perfect yet */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "emp.h"

const int MAX = 10;
const char* file = "emp.txt";

int main()
{
    using namespace std;
    abstr_emp* pc[MAX];


    int classtype;
    int i = 0;

    ofstream fout0(file, ios::out | ios::app);
    if (!fout0.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    int index = 0;
    cout << "\nPlease enter the class type of your input:\n";
    cout << "1)Employee\t2)Manager\t3)Fink\t\t4)Highfink\tq)Quit\n";
    while (cin >> classtype && index < MAX)
    {
        cin.ignore();
        switch (classtype)
        {
        case 1:
            pc[index] = new employee;
            pc[index]->SetAll();
            break;
        case 2:
            pc[index] = new manager;
            pc[index]->SetAll();
            break;
        case 3:
            pc[index] = new fink;
            pc[index]->SetAll();
            break;
        case 4:
            pc[index] = new highfink;
            pc[index]->SetAll();
            break;
        default:
            cerr << "Warning: Type error!\n";
            break;
        }
        index++;
        cout << "\nPlease enter the class type of your input:\n";
        cout << "1)Employee\t2)Manager\t3)Fink\t\t4)Highfink\tq)Quit\n";
    }
    cout << "Input over.\nThank You!\n";
    cout << "Begin to write into the file...\n";
    cout << "Writing...\n";
    for (i = 0; i < index; i++)
        pc[i]->writeall(fout0);
    fout0.clear();
    fout0.close();
    cout << "Write over.\n";

    ifstream fin;
    char ch;
    fin.open(file);
    if (fin.is_open())
    {
        cout << "Here are the current contents of the " << file << " file:\n";
        while ((fin >> classtype).get(ch))
        {
            switch (classtype)
            {
            case Employee: pc[i] = new employee; break;
            case Manager: pc[i] = new manager; break;
            case Fink: pc[i] = new fink; break;
            case Highfink: pc[i] = new highfink; break;
            default: cerr << "Warning: Type error!\n"; break;
            }
            pc[i]->setall(fin);
            pc[i]->ShowAll();
            i++;
        }
        fin.clear();
        fin.close();
    }

    ofstream fout(file, ios::out | ios::app); 
    if (!fout.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    
    cout << "\nPlease enter the class type of your input:\n";
    cout << "1)Employee\t2)Manager\t3)Fink\t\t4)Highfink\tq)Quit\n";
    while (cin >> classtype && index < MAX)
    {
        cin.ignore();
        switch (classtype)
        {
        case 1:
            pc[index] = new employee;
            pc[index]->SetAll();
            break;
        case 2:
            pc[index] = new manager;
            pc[index]->SetAll();
            break;
        case 3:
            pc[index] = new fink;
            pc[index]->SetAll();
            break;
        case 4:
            pc[index] = new highfink;
            pc[index]->SetAll();
            break;
        default:
            cerr << "Warning: Type error!\n";
            break;
        }
        index++;
        cout << "\nPlease enter the class type of your input:\n";
        cout << "1)Employee\t2)Manager\t3)Fink\t\t4)Highfink\tq)Quit\n";
    }
    cout << "Input over.\nThank You!\n";
    cout << "Begin to write into the file...\n";
    cout << "Writing...\n";
    for (i = 0; i < index; i++)
        pc[i]->writeall(fout);
    fout.clear();
    fout.close();
    cout << "Write over.\n";

    fin.open(file);
    if (fin.is_open())
    {
        cout << "Here are the current contents of the " << file << " file:\n";
        while ((fin >> classtype).get(ch))
        {
            switch (classtype)
            {
            case Employee: pc[i] = new employee; break;
            case Manager: pc[i] = new manager; break;
            case Fink: pc[i] = new fink; break;
            case Highfink: pc[i] = new highfink; break;
            default: cerr << "Warning: Type error!\n"; break;
            }
            pc[i]->setall(fin);
            pc[i]->ShowAll();
            i++;
        }
        fin.clear();
        fin.close();
    }

    return 0;
}
