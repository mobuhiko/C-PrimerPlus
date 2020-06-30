#ifndef MOVE_DEF_H_INCLUDED
#define MOVE_DEF_H_INCLUDED

class Move
{
private:
    double x;
    double y;
public:
    // sets x, y to a, b
    Move(double a = 0, double b = 0);
    // show current x, y
    void showmove() const;
    // this function adds x of m to x of invoking object to get new x,
    // adds y of m to y of invoking object to get new y, creates a new
    // move object initialized to new x, y values and returns it
    Move add(const Move & m) const;
    // reset x, y to a, b
    void reset(double a = 0, double b = 0);
};
#endif // MOVE_DEF_H_INCLUDED
