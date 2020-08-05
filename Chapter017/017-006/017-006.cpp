#include <iostream>
using namespace std;
#include "emp.h"

const int MAX = 10; // no more than 10 employees
enum classkind{employee, manager, fink, highfink};

int main(void)
{
    ofstream fout;
    fout.open("emp.txt"); // create and open emp.txt
    if(!fout.is_open())
    {
        cerr << "FAIL TO OPEN EMP.TXT\n";
    }
    cout << "SUCCESS TO OPEN EMP.TXT\n";

    employee * pc[MAX];
    int classtype;
    cout << "which type of employee to add?\n";
    cout << "( 0 - employee, 1 - manager, 2 - fink, 3 - highfink)\n";
     while((fin >> employee).get(ch)) // newline seperates int from data
    {
        switch(classtype)
        {
        case employee:
            pc[i] = new employee;
            pc[i]->SetAll();
            break;
        }
    }


    cout << "which type of employee to add?\n";
    cout << "( 0 - employee, 1 - manager, 2 - fink, 3 - highfink)\n";

    while((fin >> employee).get(ch)) // newline seperates int from data
    {
        switch(classtype)
        {
        case employee:
            pc[i] = new employee;

            break;
        }
    }





    /////////////////////////////////////////////////////
    /*
    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();
    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();
    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();
    highfink hf(ma, "Curly Kew");  // recruitment?
    hf.ShowAll();
    cout << "Press a key for next phase:\n";
    cin.get();
    highfink hf2;
    hf2.SetAll();
    cout << "Using an abstr_emp * pointer:\n";
    abstr_emp  * tri[4] = {&em, &fi, &hf, &hf2};
    for (int i = 0; i < 4; i++)
        tri[i]->ShowAll();
    cout << "OLD VERSION ENDS\n\n";
    */
    ///////////////////////////////////////////////////////


    // 17.17 [BEGIN]
    /*
    if (argc == 1)          // quit if no arguments
    {
        cerr << "Usage: " << argv[0] << " filename[s]\n";
        exit(EXIT_FAILURE);
    }
    ifstream fin;              // open stream
    long count;
    long total = 0;
    char ch;
    for (int file = 1; file < argc; file++)
    {
        fin.open(argv[file]);  // connect stream to argv[file]
        if (!fin.is_open())
        {
            cerr << "Could not open " << argv[file] << endl;
            fin.clear(); continue;
        }
        count = 0;
        while (fin.get(ch))
            count++;
        cout << count << " characters in " << argv[file] << endl;
        total += count;
        fin.clear();           // needed for some implementations
        fin.close();           // disconnect file
    }
    cout << total << " characters in all files\n";
    */
    // 17.17 [END]
    ifstream fin;
    fin.open("emp.txt", ios_base::out | ios_base::app);
    if(!fin.is_open())
    {
        cerr << "FAIL TO OPEN EMP.TXT\n";
    }
    cout << "SUCCESS TO OPEN EMP.TXT\n";




    //////////////////////////////////////////////////////
    return 0;
}
