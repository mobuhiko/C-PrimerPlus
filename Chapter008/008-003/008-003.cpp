#include <iostream>
#include <cstring>
#include <string>
#include <ctype.h>

using namespace std;

string change_to_upper(string& str);

int main()
{
	string input;
	cout << "Enter a string (q to quit): ";
	getline(cin, input);
	while (input != "q")
	{
		string output = change_to_upper(input);
		cout << output << endl;
		cout << "Enter a string (q to quit): ";
		getline(cin, input);
	}
	
	return 0;
}

string change_to_upper(string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
	}
	return str;
}
