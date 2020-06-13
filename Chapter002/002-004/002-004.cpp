#include <iostream>
using namespace std;
int year2month(int year);

int main(void) {
	int age;
	cout << "enter your age: ";
	cin >> age;
	int age2month = year2month(age);
	cout << "you are " << age << " years old, which is "
		<< age2month << " months long" << endl;
}

int year2month(int year) {
	int month = year * 12;
	return month;
}
