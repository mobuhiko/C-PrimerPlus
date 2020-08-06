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
    char ch;

    // create and add content
    ofstream fout0;  
    fout0.open(file);
    if (!fout0.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    int index0 = 0;
    cout << "\nPlease enter the class type of your input:\n";
    cout << "1)Employee\t2)Manager\t3)Fink\t\t4)Highfink\tq)Quit\n";
    while (cin >> classtype)
    {
        cin.ignore();
        switch (classtype)
        {
        case 1:
            pc[index0] = new employee;
            pc[index0]->SetAll();
            break;
        case 2:
            pc[index0] = new manager;
            pc[index0]->SetAll();
            
            break;
        case 3:
            pc[index0] = new fink;
            pc[index0]->SetAll();
            break;
        case 4:
            pc[index0] = new highfink;
            pc[index0]->SetAll();
            break;
        default:
            cerr << "Warning: Type error!\n";
            break;
        }
        index0++;
        if (index0 >= MAX)
            break;
        cout << "\nPlease enter the class type of your input:\n";
        cout << "1)Employee\t2)Manager\t3)Fink\t\t4)Highfink\tq)Quit\n";
    }
    cout << "Input over.\nThank You!\n";
    cout << "Begin to write into the file...\n";
    cout << "Writing...\n";
    for (i = 0; i < index0; i++)
        pc[i]->writeall(fout0);
    fout0.close();
    fout0.close();
    cout << "Write over.\n";

    // open file and read
    ifstream fin1;
    fin1.open(file);
    if (fin1.is_open())
    {
        cout << "Here are the current contents of the " << file << " file:\n";
        while ((fin1 >> classtype).get(ch))
        {
            switch (classtype)
            {
            case Employee: pc[i] = new employee; break;
            case Manager: pc[i] = new manager; break;
            case Fink: pc[i] = new fink; break;
            case Highfink: pc[i] = new highfink; break;
            default: cerr << "Warning: Type error!\n"; break;
            }
            pc[i]->setall(fin1);
            pc[i]->ShowAll();
            i++;
        }
        fin1.clear();
        fin1.close();
    }

    // add new contents
    ofstream fout1(file, ios::out | ios::app);
    if (!fout1.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    int index1 = 0;
    cout << "\nPlease enter the class type of your input:\n";
    cout << "1)Employee\t2)Manager\t3)Fink\t\t4)Highfink\tq)Quit\n";
    while (cin >> classtype && index1 < MAX)
    {
        cin.ignore();
        switch (classtype)
        {
        case 1:
            pc[index1] = new employee;
            pc[index1]->SetAll();
            break;
        case 2:
            pc[index1] = new manager;
            pc[index1]->SetAll();
            break;
        case 3:
            pc[index1] = new fink;
            pc[index1]->SetAll();
            break;
        case 4:
            pc[index1] = new highfink;
            pc[index1]->SetAll();
            break;
        default:
            cerr << "Warning: Type error!\n";
            break;
        }
        index1++;
        cout << "\nPlease enter the class type of your input:\n";
        cout << "1)Employee\t2)Manager\t3)Fink\t\t4)Highfink\tq)Quit\n";
    }
    cout << "Input over.\nThank You!\n";
    cout << "Begin to write into the file...\n";
    cout << "Writing...\n";
    for (i = 0; i < index1; i++)
        pc[i]->writeall(fout1);
    fout1.clear();
    fout1.close();
    cout << "Write over.\n";

    // show all contents
    ifstream fin2;
    fin2.open(file);
    if (fin2.is_open())
    {
        cout << "Here are the current contents of the " << file << " file:\n";
        while ((fin2 >> classtype).get(ch))
        {
            switch (classtype)
            {
            case Employee: pc[i] = new employee; break;
            case Manager: pc[i] = new manager; break;
            case Fink: pc[i] = new fink; break;
            case Highfink: pc[i] = new highfink; break;
            default: cerr << "Warning: Type error!\n"; break;
            }
            pc[i]->setall(fin2);
            pc[i]->ShowAll();
            i++;
        }
        fin2.clear();
        fin2.close();
    }

    return 0;
}
