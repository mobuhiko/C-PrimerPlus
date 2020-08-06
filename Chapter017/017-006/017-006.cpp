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
    // create and input to the file 
    ifstream fin0(file, ios::out | ios::app);
    if (!fin0.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    int index = 0;
    cout << "\nPlease enter the class type of your input:\n";
    cout << "1)Employee\t2)Manager\t3)Fink\t\t4)Highfink\tq)Quit\n";
    while (cin >> classtype && index < MAX) // input to the output?
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
        pc[i]->writeall(fin0);
    fin0.clear();
    fin0.close();
    cout << "Write over.\n";

    // 
    ofstream fout1;
    char ch;
    fout1.open(file);
    if (fout1.is_open())
    {
        cout << "Here are the current contents of the " << file << " file:\n";
        while ((fout1 >> classtype).get(ch))
        {
            switch (classtype)
            {
            case Employee: pc[i] = new employee; break;
            case Manager: pc[i] = new manager; break;
            case Fink: pc[i] = new fink; break;
            case Highfink: pc[i] = new highfink; break;
            default: cerr << "Warning: Type error!\n"; break;
            }
            pc[i]->setall(fout1);
            pc[i]->ShowAll();
            i++;
        }
        fout1.clear();
        fout1.close();
    }

    ifstream fin1(file, ios::out | ios::app); 
    if (!fin1.is_open())
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
        pc[i]->writeall(fin1);
    fin1.clear();
    fin1.close();
    cout << "Write over.\n";

    fout2.open(file);
    if (fout2.is_open())
    {
        cout << "Here are the current contents of the " << file << " file:\n";
        while ((fout2 >> classtype).get(ch))
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
        fout2.clear();
        fout2.close();
    }

    return 0;
}
