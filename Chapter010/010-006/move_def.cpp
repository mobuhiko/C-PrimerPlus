#include "move_def.h"
#include <iostream>
using namespace std;

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

// show current x, y
void Move::showmove() const
{
    cout << "(" << x << ", " << y << ")" << endl;
}

// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
Move Move::add(const Move & m) const
{
    Move n;
    n.x = m.x + this->x;
    n.y = m.y + this->y;
    return n;
}

// reset x, y to a, b
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
