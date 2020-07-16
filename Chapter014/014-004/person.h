#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>
using namespace std;

class Person
{
private:
    std::string first_name;
    std::string last_name;
public:
    virtual void Show() const = 0;
    Person() : first_name("NONE"), last_name("NONE"){}
    Person(std::string fn, std::string ln) : first_name(fn), last_name(ln){}
    Person(const Person & p);
    virtual ~Person() = 0;
};

class Gunslinger : virtual public Person
{
private:
    int notch;
    double draw_time;
public:
    double Draw();
    void Show() const;
    Gunslinger(int nh = 0, double dt = 0) : Person(), notch(nh), draw_time(dt){}
    Gunslinger(std::string fn, std::string ln, int nh, double dt) : Person(fn, ln), notch(nh), draw_time(dt){}
    Gunslinger(const Person & p, int nh, double dt = 0) : Person(p), notch(nh), draw_time(dt) {}
    Gunslinger(const Gunslinger & g);
    ~Gunslinger();
};

class PokerPlayer : virtual public Person
{
private:
public:
    int Draw() const;  // [1, 52]
    void Show() const;
    PokerPlayer() : Person(){}
    PokerPlayer(std::string fn, std::string ln) : Person(fn, ln){}
    PokerPlayer(const Person & p) : Person(p) {}
    PokerPlayer(const PokerPlayer & p) : Person(p) {}
};

class BadDude : public Gunslinger, public PokerPlayer
{
private:
public:
    double Gdraw();
    int Cdraw();
    void Show() const;
    BadDude(){}
    BadDude(const Person & p, int n, double t) : Person(p), Gunslinger(p, n, t), PokerPlayer(p) {}
    BadDude(const Gunslinger & g, int n, double t) : Person(g), Gunslinger(g, n, t), PokerPlayer(g) {}
    BadDude(const PokerPlayer & p, int n, double t) : Person(p), Gunslinger(p, n, t), PokerPlayer(p) {}
    BadDude(std::string fn, std::string ln,int nh, double dt) : Person(fn, ln), PokerPlayer(fn, ln), Gunslinger(fn, ln, nh, dt){}
    ~BadDude();
};


/*
class Person
{
private:
    std::string firstname;
    std::string lastname;
public:
    Person() : firstname("None"), lastname("None") {}
    Person(std::string fname, std::string lname) : firstname(fname), lastname(lname) {}
    Person(const Person & p);
    virtual ~Person() = 0;
    virtual void Show() const = 0;
};

class Gunslinger : virtual public Person
{
private:
    int nick;
    double time;
public:
    Gunslinger(int n = 0, double t = 0) : Person(), nick(n), time(t) {}
    Gunslinger(const std::string fname, const std::string lname, int n, double t) : Person(fname, lname), nick(n), time(t) {}
    Gunslinger(const Person & p, int n, double t = 0) : Person(p), nick(n), time(t) {}
    Gunslinger(const Gunslinger & g);
    ~Gunslinger();
    double Draw() const;
    void Show() const;
};

class PokerPlayer : virtual public Person
{
public:
    int Draw() const;
    void Show() const;
    PokerPlayer() : Person() {}
    PokerPlayer(const std::string fname, const std::string lname) : Person(fname, lname) {}
    PokerPlayer(const Person & p) : Person(p) {}
    PokerPlayer(const PokerPlayer & p) : Person(p) {}
    ~PokerPlayer();
};

class BadDude : public Gunslinger, public PokerPlayer
{
public:
    BadDude() {}
    BadDude(const std::string fname, const std::string lname, int n, double t) : Person(fname, lname), Gunslinger(fname, lname, n, t), PokerPlayer(fname, lname) {}
    BadDude(const Person & p, int n, double t) : Person(p), Gunslinger(p, n, t), PokerPlayer(p) {}
    BadDude(const Gunslinger & g, int n, double t) : Person(g), Gunslinger(g, n, t), PokerPlayer(g) {}
    BadDude(const PokerPlayer & p, int n, double t) : Person(p), Gunslinger(p, n, t), PokerPlayer(p) {}
    ~BadDude();
    void Show() const;
    double Gdraw();
    int Cdraw();
};
*/

#endif // PERSON_H_INCLUDED
