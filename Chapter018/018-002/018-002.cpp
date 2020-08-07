#include <iostream>
#include <string>
#include <initializer_list>

class Cpmv
{
public:
	struct Info
	{
		std::string qcode;
		std::string zcode;
	};
private:
	Info* pi;
public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv(const Cpmv& cp);
	Cpmv(Cpmv&& mv);
	~Cpmv();
	Cpmv& operator=(const Cpmv& cp);
	Cpmv& operator=(Cpmv&& mv);
	Cpmv operator+(const Cpmv& obj) const;
	void Display() const;
};

Cpmv::Cpmv()
{
	pi = new Info;
	pi->qcode = "QCODE";
	pi->zcode = "ZCODE";
}

Cpmv::Cpmv(std::string q, std::string z)
{
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv& cp)
{
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
}

Cpmv::Cpmv(Cpmv&& mv)
{
	pi = new Info;
	pi = mv.pi;
	mv.pi = nullptr;
}

Cpmv::~Cpmv()
{
	//if(pi == nullptr)
		//std::cout << "Destrcution Complete\n";

	delete pi;
	std::cout << "Destrcution Complete\n";
}

Cpmv& Cpmv::operator=(const Cpmv& cp)
{
	if (pi == nullptr)
		pi = new Info;
	pi = cp.pi;
	return *this;
}

Cpmv& Cpmv::operator=(Cpmv&& mv)
{
	delete pi;
	pi = new Info;
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;
}

Cpmv Cpmv::operator+(const Cpmv& obj) const
{
	Cpmv sum;
	sum.pi->qcode = pi->qcode + obj.pi->qcode;
	sum.pi->zcode = pi->zcode + obj.pi->zcode;
	return sum;
}

void Cpmv::Display() const
{
	if (pi == nullptr)
	{
		std::cout << "NULL POINTER\n";
		return;
	}
	std::cout << pi->qcode << std::endl;
	std::cout << pi->zcode << std::endl;
}

int main()
{
	using namespace std;
	{
		Cpmv obj1;
		obj1.Display();

		Cpmv obj2("Hello", "World");
		obj2.Display();

		Cpmv obj3(obj2);
		obj3.Display();

		Cpmv obj4(obj2 + obj3);
		obj4.Display();

		obj4 = obj2;
		obj4.Display();

		obj1 = obj4 + obj2;
		obj1.Display();
	} 
  // problems in destructor, in xmemory.cpp 
	return 0;
}

