#include <iostream>
#include <cstring>

class Cow
{
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow &c);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const;  // display all cow data
};

Cow::Cow()
{
    strcpy(name, "new cow");
    hobby = new char[1];
    strcpy(hobby, "\0");
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

void Cow::ShowCow() const
{
    std::cout << "NAME: " << name << std::endl;
    std::cout << "HOBBY: " << hobby << std::endl;
    std::cout << "WEIGHT: " << weight << std::endl;
    std::cout << std::endl;
}

int main()
{
    Cow cow_1;
    cow_1.ShowCow();

    Cow cow_2("COW", "SLEEPING", 100);
    cow_2.ShowCow();

    Cow cow_3(cow_2);
    cow_3.ShowCow();

    Cow cow_4 = cow_3;
    cow_4.ShowCow();
    
    return 0;
}
