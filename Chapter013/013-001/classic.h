#ifndef CLASSIC_H_INCLUDED
#define CLASSIC_H_INCLUDED
#include "Cd.h"

class Classic : public Cd
{
private:
    char mainworks[50];
public:
    Classic(char * s1, char * s2, char * s3, int n, double x);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    virtual Classic & operator=(const Classic & d);
};


#endif // CLASSIC_H_INCLUDED
