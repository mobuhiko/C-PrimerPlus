#include <iostream>
#include <fstream>
#include <cstdlib>
//#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    // set a "input.txt" and "output.txt" 
    // in command? in debug property in VS2019 
    
    if (argc == 1)
    {
        cerr << "Usage: " << argv[0] << " filename[s]\n";
        exit(EXIT_FAILURE);
    }

    ifstream fin;
    ofstream fout; // open stream

    fin.open(argv[1]); // input.txt 
    fout.open(argv[2]); // output.txt
    if (!fin.is_open())
    {
        cerr << "could not open" << argv[1] << endl;
        fin.clear();
        exit(EXIT_FAILURE);
    }

    if (!fout.is_open())
    {
        cerr << "could not open" << argv[2] << endl;
        fout.clear();
        exit(EXIT_FAILURE);
    }
    cout << "open successfully\n";
    ////////////////////////////
    cout << "start read input file\n";
    char input;
    while (fin.get(input))
    {
        if (fin.eof())
        {
            cout << "meets EOF\n";
            break;
        }
        fout << input;
    }
    cout << "FINISH\n";
    fin.close();
    fout.close();
    ////////////////////////////
    
    return 0;
}
