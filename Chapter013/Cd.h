#ifndef CD_H_INCLUDED
#define CD_H_INCLUDED

// base class
class Cd
{
// represents a CD disk
private:
    char *performers;
    char *label;
    int selections;   // number of selections
    double playtime;  // playing time in minutes
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;  // reports all CD data
    virtual Cd & operator=(const Cd & d);
};



#endif // CD_H_INCLUDED
