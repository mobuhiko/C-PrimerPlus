/*  */
#include <iostream> 
#include <cstring>      // for strlen(), strcpy() 

using namespace std;

struct stringy
{
	char* str;        // points to a string 
	int ct;            // length of string (not counting '\0') 
};

// prototypes for set(), show(), and show() go here 
void set(stringy& stringy_str, const char* char_str);
void show(const stringy& stringy_str, const int number = 1);
void show(const char* char_str, const int number = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);    // first argument is a reference, 
	// allocates space to hold copy of testing, 
	// sets str member of beany to point to the 
	// new block, copies testing to new block, 
	// and sets ct member of beany

	show(beany);      // prints member string once 
	show(beany, 2);   // prints member string twice 
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);    // prints testing string once 
	show(testing, 3); // prints testing string thrice 
	show("Done!");

	delete[] beany.str; // set(beany, testing)

	return 0;
}

void set(stringy& stringy_str, const char* char_str)
{
	stringy_str.ct = strlen(char_str) + 1;
	stringy_str.str = new char[stringy_str.ct];
	strcpy(stringy_str.str, char_str);
}

void show(const stringy& stringy_str, const int number)
{
	for (int i = 0; i < number; i++)
	{
		cout << stringy_str.str << endl;
	}
	cout << endl;
}

void show(const char* char_str, const int number)
{
	for (int i = 0; i < number; i++)
	{
		cout << char_str << endl;
	}
	cout << endl;
}
