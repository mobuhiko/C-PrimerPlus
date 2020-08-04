#include <iostream>
#include <fstream>
#include <cstdlib>
//#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    // set a "test.txt" in command? in debug property in VS2019 
    if (argc == 1)
    {
        cerr << "Usage: " << argv[0] << " filename[s]\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout; // open stream
    for (int file = 1; file < argc; file++)
    {
        fout.open(argv[file]); // connect stream
        if (!fout.is_open())
        {
            cerr << "could not open" << argv[file] << endl;
            fout.clear();
            exit(EXIT_FAILURE);
        }
        ////////////////////////////
        cout << "enter something until EOF (ctrl+z) \n";
        char input;
        while (cin >> input)
        {
            if (cin.eof())
            {
                cout << "meets EOF\n";
                break;
            }
            fout << input;
        }
        cout << "FINISH\n";
        fout.close();
        ////////////////////////////
    }

    return 0;
}
