#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cctype>

//const string wordlist[NUM] = { "apiary", "beetle", "cereal",
//"danger", "ensign", "florid", "garage", "health", "insult",
//"jackal", "keeper", "loaner", "manage", "nonce", "onset",
//"plaid", "quilt", "remote", "stolid", "train", "useful",
//"valid", "whence", "xenon", "yearn", "zippy" };

int main()
{
    using std::string;
    using std::cout;
    using std::cin;
    using std::tolower;
    using std::endl;
    using std::getline;

    const string filename = "016-003.txt";
    // if you use full path, keep in mind that
    // use double backslash "C:\\016-003.txt", single backslash in Windows OS won't be recognized
    std::ifstream fin;
    fin.open(filename);

    if (fin.fail())
    {
        std::cout << "cannot open\n";
        exit(EXIT_FAILURE);
    }

    string temp;
    std::vector<string> wordlist;
    getline(fin, temp); // read a line into temp, up to \n (default), and discard \n
    // same as getline(fin, temp, '\n');
    while (fin)
    {
        wordlist.push_back(temp);
        getline(fin, temp); // dont forget this to continue while loop
    }
    const int NUM = wordlist.size();

    /* test program */
    //for (auto i = wordlist.begin(); i != wordlist.end(); ++i)
        //cout << *i << endl;

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
