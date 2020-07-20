#ifndef EXC_MEAN_H_INCLUDED
#define EXC_MEAN_H_INCLUDED

// exc_mean.h  -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>
#include <string>
#include <cstring>
using namespace std;

class bad_hmean : public logic_error
{
private:
    double v1;
    double v2;
    string name;
public:
    void mesg();
    explicit bad_hmean(const string &n = "hmean", const string &s = "Error in hmean()\n", double a = 0, double b  = 0);
    const char * what() {return "bad argument in hmean\n";}
    virtual ~bad_hmean() throw() {}
};

inline void bad_hmean::mesg()
{
    std::cout << "hmean(" << v1 << ", " << v2 <<"): " << "invalid arguments: a = -b\n";
}

class bad_gmean : public logic_error
{
private:
    string name;
public:
    double v1;
    double v2;
    explicit bad_gmean(const string &n = "gmean", const string &s = "Error in gmean()\n", double a = 0, double b  = 0);
    const char * what() {return "bad argument in gmean\n";}
    virtual ~bad_gmean() throw() {}
    const char * mesg();
};

inline const char * bad_gmean::mesg()
{
    return "gmean() arguments should be >= 0\n";
}


bad_gmean::bad_gmean(const string &n, const string &s, double a, double b) : name(n), logic_error(s), v1(a), v2(b) {}
bad_hmean::bad_hmean(const string &n, const string &s, double a, double b) : name(n), logic_error(s), v1(a), v2(b) {}

#endif // EXC_MEAN_H_INCLUDED
