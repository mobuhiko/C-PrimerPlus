#include "person.h"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;
void Person::Show() const
{
    std::cout << "Name: " << first_name << ", " << last_name << std::endl;
}

Person::Person(const Person & p)
{
    first_name = p.first_name;
    last_name = p.last_name;
}

Person::~Person()
{
}

Gunslinger::Gunslinger(const Gunslinger & g) : Person(g)
{
    notch = g.notch;
    draw_time = g.draw_time;
}

double Gunslinger::Draw()
{
    return draw_time;
}

void Gunslinger::Show() const
{
    std::cout << "GUNSLINGER: \n";
    Person::Show();
    std::cout << "Draw Time: " << draw_time << std::endl;
    std::cout << "Notch: " << notch << std::endl;
}

Gunslinger::~Gunslinger()
{
}

int PokerPlayer::Draw() const // [1, 52]
{
    int random;
    srand((int)time(NULL));
    random = (rand()%(52-1+1))+1;
    return random;
}

void PokerPlayer::Show() const
{
    std::cout << "POKERPLAYER: \n";
    Person::Show();
}

double BadDude::Gdraw()
{
    return Gunslinger::Draw();
}

int BadDude::Cdraw()
{
   return PokerPlayer::Draw();
}

void BadDude::Show() const
{
    std::cout << "BADDUDE: \n";
    Gunslinger::Show();
    std::cout << "Draw: ";
    cout << PokerPlayer::Draw() << std::endl;
}

BadDude::~BadDude()
{
}

/*void Person::Show() const
{
    cout << "Firstname: " << firstname << "\nLastname: " << lastname << endl;
}

Person::Person(const Person & p)
{
    firstname = p.firstname;
    lastname = p.lastname;
}

Person::~Person()
{
}

Gunslinger::Gunslinger(const Gunslinger & g) : Person(g)
{
    nick = g.nick;
    time = g.time;
}

double Gunslinger::Draw() const
{
    return time;
}

void Gunslinger::Show() const
{
    cout << "Category: Gunslinger\n";
    Person::Show();
    cout << "Nicks: " << nick << ", Gun out time: " << time << endl;
}

Gunslinger::~Gunslinger()
{
}

int PokerPlayer::Draw() const
{
    return (rand() % 52);
}

void PokerPlayer::Show() const
{
    cout << "Category: PokerPlayer\n";
    Person::Show();
}

PokerPlayer::~PokerPlayer()
{
}

void BadDude::Show() const
{
    cout << "Category: Bad Dude\n";
    Gunslinger::Show();
    cout << "Next card: " << PokerPlayer::Draw() << endl;
}

double BadDude::Gdraw()
{
    return Gunslinger::Draw();
}

int BadDude::Cdraw()
{
    return PokerPlayer::Draw();
}

BadDude::~BadDude()
{
}
*/
