#ifndef VECT_H_INCLUDED
#define VECT_H_INCLUDED

// vect.h -- Vector class with <<, mode state
#include <iostream>
#include <cmath>


namespace VECTOR
{
    class Vector
    {
        public:
            enum Mode {RECT, POL}; // RECT for rectangular, POL for Polar modes
        private:
            double x;          // horizontal value
            double y;          // vertical value
            //double mag;        // length of vector
            //double ang;        // direction of vector in degrees
            Mode mode;         // RECT or POL
            // private methods for setting values
            double set_mag();
            double set_ang();
            void set_x(double mag, double ang);
            void set_y(double mag, double ang);
        public:
            Vector();
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode form = RECT);
            ~Vector();
            double xval() const {return x;}       // report x value
            double yval() const {return y;}       // report y value
            double magval() const
            {
                double mag;
                mag = sqrt(x * x + y * y);
                return mag;
            }   // report magnitude
            double angval() const
            {
                double ang;
                if (x == 0.0 && y == 0.0)
                    ang = 0.0;
                else
                    ang = atan2(y, x);
                return ang;
            }   // report angle
            void polar_mode();                    // set mode to POL
            void rect_mode();                     // set mode to RECT
            // operator overloading
            Vector operator+(const Vector & b) const;
            Vector operator-(const Vector & b) const;
            Vector operator-() const;
            Vector operator*(double n) const;
            // friends
            friend Vector operator*(double n, const Vector & a);
            friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };
}   // end namespace VECTOR
#endif // VECT_H_INCLUDED
