#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

struct donation
{
    string name;
    double money;
};

int main()
{
    // READ FILE

    /*
    4
    Sam Stone
    2000
    Freida Flass
    100500
    Tammy Tubbs
    5000
    Rich Raptor
    55000
    */


    ifstream inFile;
    inFile.open("Sample006-009.txt");

    // check whether reading the file successfully
    if(!inFile.is_open())
    {
        cout << "FAIL\n";
        exit(EXIT_FAILURE);
    }
    else
    {
        cout << "SUCCESS\n";
    }

    int number; // should be 4
    inFile >> number;
    inFile.get();
    // the first one is patron number...
    donation* patron_list = new donation [number];

    // after that, it is the content of the patron list (should have 4 patrons)
    for(int i = 0; i < number; i++)
    {

        inFile >> patron_list[i].name;
        inFile.get();
        inFile >> patron_list[i].money;
        inFile.get();

    }
    if (inFile.eof())
		cout << "End of the file reached." << endl;
	else if (inFile.fail())
		cout << "Input terminated by data mismatch." << endl;
	else
		cout << "Input terminated by unknown reason." << endl;
    // in my case, it only reads Sam. Number and Name after that fails to be read.
    // "Input terminated by data mismatch."
    // close the file
    inFile.close();
    // FINISH READING THE FILE

    cout << endl;
        for(int i = 0; i < number; ++i)
    {
        cout << patron_list[i].name << endl;
        cout << patron_list[i].money << endl;
    }

    // MAKE NEW LIST from 006-006.cpp
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
