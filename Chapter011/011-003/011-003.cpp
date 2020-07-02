// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"

int main()
{
    using namespace std;



    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    double minstep = 0;
    double maxstep = 0;
    double totalstep = 0;
    int N = 0;

    cout << "enter the times: ";
    cin >> N;

    cout << "Enter target distance: ";
    cin >> target;
    cout << "Enter step length: ";
    cin >> dstep;
    for(int i = 0; i < N; ++i)
    {
          while (result.magval() < target)
        {

            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject " "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = " << result.magval()/steps << endl;

        if(minstep == 0)
        {
            minstep = steps;
        }
        else
        {
            if(minstep > steps)
            {
                minstep = steps;
            }
        }

        if(steps > maxstep)
        {
            maxstep = steps;
        }

        totalstep += steps;

        steps = 0;
        result.reset(0.0, 0.0);
    }

    cout << endl;
    double averagestep = totalstep / N;
    cout << "MIN: " << minstep << endl;
    cout << "MAX: " << maxstep << endl;
    cout << "AVERAGE: " << averagestep << endl;

    cout << "Bye!\n";
    cin.clear();

    return 0;
}
