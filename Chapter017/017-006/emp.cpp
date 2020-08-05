#include "emp.h"
#include <iostream>
using namespace std;

abstr_emp::abstr_emp()
{
	fname = "NULL";
	lname = "NULL";
	job = "NULL";
}

abstr_emp::abstr_emp(const std::string& fn, const std::string& ln, const std::string& j)
{
	fname = fn;
	lname = ln;
	job = j;
}

void abstr_emp::ShowAll() const   // labels and shows all data
{
	cout << fname << ", " << lname << endl;
	cout << "JOB: " << job << endl;
}

void abstr_emp::SetAll()       // prompts user for values
{
	cout << "First name? " << endl;
	getline(cin, fname);
	cin.get();
	cout << "Last name? " << endl;
	getline(cin, lname);
	cin.get();
	cout << "Job? " << endl;
	getline(cin, job);
	cin.get();
}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e) // just displays first and last name
{
	os << e.fname << ", " << e.lname << endl;
	os << "JOB: " << e.job << endl;
	return os;
}

abstr_emp::~abstr_emp()         // virtual base class
{
}

employee::employee()
{
}

employee::employee(const std::string& fn, const std::string& ln, const std::string& j)
{
}

void employee::ShowAll() const
{
	cout << "Employee: " << endl;
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	cout << "Employee: " << endl;
	abstr_emp::SetAll();
}

manager::manager() : abstr_emp::abstr_emp()
{
	inchargeof = 0;
}

manager::manager(const std::string& fn, const std::string& ln, const std::string& j, int ico) : abstr_emp::abstr_emp(fn, ln, j), inchargeof(ico)
{
}

manager::manager(const abstr_emp& e, int ico) : abstr_emp::abstr_emp(e), inchargeof(ico)
{
}

manager::manager(const manager& m) : abstr_emp::abstr_emp(m)
{
	inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
	cout << "MANAGER: " << endl;
	abstr_emp::ShowAll();
	cout << "IN CHARGE: " << inchargeof << endl;
}

void manager::SetAll()
{
	cout << "MANAGER; " << endl;
	abstr_emp::SetAll();
	cout << "IN CHARGE? " << endl;
	cin >> inchargeof;
}

fink::fink() : abstr_emp::abstr_emp()
{
	reportsto = "NONE";
}

fink::fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{
}

fink::fink(const abstr_emp& e, const std::string& rpo) : abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink& f) : abstr_emp(f)
{
	reportsto = f.reportsto;
}

void fink::ShowAll() const
{
	cout << "FINK: " << endl;
	abstr_emp::ShowAll();
	cout << "REPORTS TO: " << reportsto << endl;
}

void fink::SetAll()
{
	cout << "FINK; " << endl;
	abstr_emp::SetAll();
	cout << "REPORTS TO? " << endl;
	getline(cin, reportsto);
	cin.get();
}


highfink::highfink() : abstr_emp(), manager(), fink()
{
}

highfink::highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico)
	: abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}

highfink::highfink(const abstr_emp& e, const std::string& rpo, int ico)
	: abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}

highfink::highfink(const fink& f, int ico)
	: abstr_emp(f), manager(f, ico), fink(f)
{
}

highfink::highfink(const manager& m, const std::string& rpo)
	: abstr_emp(m), manager(m), fink(m, rpo)
{
}

highfink::highfink(const highfink& h)
	: abstr_emp(h), manager(h), fink(h)
{
}

void highfink::ShowAll() const
{
	cout << "HIGHFINK: " << endl;
	abstr_emp::ShowAll();
	cout << "IN CHARGE: " << manager::InChargeOf() << endl;
	cout << "REPORTS TO: " << fink::ReportsTo() << endl;
	cout << endl;
}

void highfink::SetAll()
{
	cout << "HIGHFINK: " << endl;
	abstr_emp::ShowAll();
	cout << "IN CHARGE? " << endl;
	manager::InChargeOf();
	cout << "REPORTS TO? " << endl;
	fink::ReportsTo();
	cout << endl;
}
