// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"
#include <fstream>

int main()
{
    using namespace std;
    ofstream outFile;
    outFile.open("Sample011-001.txt");
    // check whether reading the file successfully
    if(!outFile.is_open())
    {
        cout << "Fail to open\n";
        exit(EXIT_FAILURE);
    }

    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        outFile << "Target Distance: " << target << ", ";
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        outFile << "Step Size: " << dstep << endl;

        while (result.magval() < target)
        {

            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            outFile << steps << ": ";
            outFile << result << endl;
            steps++;
        }
        cout << "After " << steps << " steps, the subject " "has the following location:\n";
        outFile << "After " << steps << " steps, the subject " "has the following location:\n";
        cout << result << endl;
        outFile << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        outFile << " or\n" << result << endl;
        cout << "Average outward distance per step = " << result.magval()/steps << endl;
        outFile << "Average outward distance per step = " << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);

        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;

    outFile.close();
    return 0;
}
