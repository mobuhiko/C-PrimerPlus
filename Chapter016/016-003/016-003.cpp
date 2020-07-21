#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

#include <fstream>
#include <vector>


using std::string;

const int NUM = 26;


int main()
{
	using std::cout;
	using std::cin;
	using std::tolower;
	using std::endl;

	//const string filename = "D:\GitPractice\C-PrimerPlus\Chapter016\016-003\016-003.txt";
	std::ifstream fin;
	fin.open("D:\GitPractice\C - PrimerPlus\Chapter016\016-003\016-003.txt");
	if (!fin.is_open())
	{
		std::cout << "cannot open\n";
		exit(EXIT_FAILURE);
	}

	string temp;
	std::vector<string> wordlist;
	std::getline(fin, temp, ' ');
	while (fin)
	{
		wordlist.push_back(temp);
	}

	std::srand(std::time(0));
	char play;
	cout << "Will you play a word game? <y/n> ";
	cin >> play;
	play = tolower(play);
	while (play == 'y')
	{
		string target = wordlist[std::rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "Guess my secret word. It has " << length
			<< " letters, and you guess\n"
			<< "one letter at a time. You get " << guesses
			<< " wrong guesses.\n";
		cout << "Your word: " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos
				|| attempt.find(letter) != string::npos)
			{
				cout << "You already guessed that. Try again.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "Oh, bad guess!\n";
				--guesses;
				badchars += letter; // add to string
			}
			else
			{
				cout << "Good guess!\n";
				attempt[loc] = letter;
				// check if letter appears again
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "Your word: " << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Bad choices: " << badchars << endl;
				cout << guesses << " bad guesses left\n";
			}
		}
		if (guesses > 0)
			cout << "That's right!\n";
		else
			cout << "Sorry, the word is " << target << ".\n";
			cout << "Will you play another? <y/n> ";
			cin >> play;
			play = tolower(play);
	}
	cout << "Bye\n";
	return 0;
}