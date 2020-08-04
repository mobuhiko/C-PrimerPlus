#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    // set a "input1.txt", "input2.txt" and "output1.txt" 
    // in command? in debug property in VS2019 
    // output1.txt is an empty file
    
    if (argc == 1)
    {
        cerr << "Usage: " << argv[0] << " filename[s]\n";
        exit(EXIT_FAILURE);
    }

    ifstream fin1;
    ifstream fin2;
    ofstream fout1; // open stream

    fin1.open(argv[1]); // input1.txt 
    fin2.open(argv[2]); // input2.txt
    fout1.open(argv[3]); // output1.txt
    if (!fin1.is_open())
    {
        cerr << "could not open" << argv[1] << endl;
        fin1.clear();
        exit(EXIT_FAILURE);
    }

    if (!fin2.is_open())
    {
        cerr << "could not open" << argv[2] << endl;
        fin2.clear();
        exit(EXIT_FAILURE);
    }

    if (!fout1.is_open())
    {
        cerr << "could not open" << argv[3] << endl;
        fout1.clear();
        exit(EXIT_FAILURE);
    }
    cout << "open successfully\n";
    ////////////////////////////
    cout << "start read input file\n";
    string input1;
    string input2;
    /*
    while (getline(fin1,input1) || getline(fin2, input2))
    {
        if (fin1.eof() && fin2.eof())
        {
            cout << "meets EOF\n";
            break;
        }
        string output = input1 + " " + input2;
        fout1 << output << endl;
    }
    */
    while (!(fin1.eof() && fin2.eof()))
    {
        string output;

        if (fin1.eof())
        {
            fin1.clear();
        }
        if (fin2.eof())
        {
            fin2.clear();
        }
        getline(fin1, input1);
        cout << "FIN1: " << input1 << endl;

        getline(fin2, input2);
        cout << "FIN2: " << input2 << endl;

        
        output = input1 + " " + input2;
       
        cout << "FOUT1: " << output << endl;
        fout1 << output << endl;
    }
    cout << "FINISH\n";
    fin1.close();
    fin2.close();
    fout1.close();
    ////////////////////////////
    return 0;
}
