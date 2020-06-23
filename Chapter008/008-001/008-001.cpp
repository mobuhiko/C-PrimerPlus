#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void print_string(char* str, int times = 0);

int main()
{
	int counter = 1;
	char str[10];
	cout << "Enter a string (less than 10 characters): \n";
	cin.getline(str, 10);
	cout << endl;

	// 1st time, one argument
	cout << counter << "th time: " << endl;
	counter++;
	print_string(str);
	// 2nd time, two arguments with non-zero
	cout << counter << "th time: " << endl;
	counter++;
	print_string(str, 1);
	// 3rd time, two arguments with non-zero
	cout << counter << "th time: " << endl;
	counter++;
	print_string(str, 5);
	// 4th time, one argument
	cout << counter << "th time: " << endl;
	counter++;
	print_string(str);
	// 5th time, one argument
	cout << counter << "th time: " << endl;
	counter++;
	print_string(str);
	// 6th time, two arguments with zero
	cout << counter << "th time: " << endl;
	counter++;
	print_string(str, 0);
	// 7th time, two arguments with non-zero
	cout << counter << "th time: " << endl;
	counter++;
	print_string(str, 6);

	return 0;
}

void print_string(char* str, int times)
{
	static int count = 0;
	count++;
	if (times == 0)
	{
		cout << str << endl;
	}
	else
	{
		for (int i = 0; i < count; i++)
		{
			cout << str << endl;
		}
	}
	cout << endl;
}
