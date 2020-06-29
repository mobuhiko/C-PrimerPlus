#ifndef GOLF_H_INCLUDED
#define GOLF_H_INCLUDED
// golf.h -- for pe9-1.cpp

const int Len = 40;
class golf
{
    private:
        char m_fullname[Len];
        int m_handicap;
    public:
        golf(const char* name, int handicap); //constructor w/ default value from NON-INTERACTIVE
        golf(); // interactive version:

        // function resets handicap to new value
        void resethandicap(int hc);

        // function displays contents of golf structure
        void showgolf();
};
#endif // GOLF_H_INCLUDED
