#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
//#include <algorithm>

using namespace std;

void ShowStr(const string & str);

class Store
{
public:
	ostream& os;
	Store(ostream & o) : os(o) {}
	void operator() (const string& str);
};

void Store::operator() (const string& str)
{
	size_t len = str.size();
	os.write((char*)&len, sizeof(std::size_t)); // store length
	os.write(str.data(), len); // store characters
}

void GetStrs(istream& is, vector<string>& vstr);

int main()
{
	
	vector<string> vostr;
	string temp;

	// acquire strings
	cout << "Enter strings (empty line to quit):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Here is your input.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);
	// store in a file
	ofstream fout("strings.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();
	// recover file contents
	vector<string> vistr;
	ifstream fin("strings.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nHere are the strings read from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);
	return 0;
}

void ShowStr(const string& str)
{
	cout << str;
	cout << endl;
}

void GetStrs(istream& is, vector<string>& vstr)
{
	string temp;
	size_t len;
	while (is.read((char*)&len, sizeof(size_t)))
	{
		if (len <= 0)
			break;
		char ch;
		temp = "";
		for (int i = 0; i < len; ++i)
		{
			if (is.read(&ch, 1))
			{
				temp += ch;
			}
			else
				break;
		}

		if(is)
		{
			vstr.push_back(temp);
		}
	}
}
