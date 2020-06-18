#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("Sample006-008.txt");

    // check whether reading the file successfully
    if(!inFile.is_open())
    {
        cout << "Fail to open\n";
        exit(EXIT_FAILURE);
    }

    int counter = 0;
    char ch;

    // begin to read the content in the file
    // <hello, world! > = 10 alphabets + 2 punctuations (+ 2 space)
    inFile >> ch;
    while(inFile.good())
    {
        counter++;
        inFile >> ch;
    }

    // message if reading the EOF
    if(inFile.eof())
    {
        cout << "EOF reached\n";
    }

    // close the file
    inFile.close();
    
    // <There are 12 characters>
    cout << "There are " << counter << " characters\n";

    return 0;
}
