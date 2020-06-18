#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    int vowel_counter = 0;
    int consonant_counter = 0;
    int other_counter = 0;
    int nonword_counter = 0;

    cout << "Enter words (q to quit): \n";
    string word;
    cin >> word;
    while(word != "q")
    {
        if(isalpha(word[0]))
        {
            switch(word[0])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowel_counter++;
                break;
            default:
                consonant_counter++;
                break;
            }
        }
        else if(isspace(word[0]) || ispunct(word[0]))
        {
           ;
        }
        else
        {
            other_counter++;
        }

        cin >> word;
    }

    cout << vowel_counter << " words beginning with vowels\n";
    cout << consonant_counter << " words beginning with consonants\n";
    cout << other_counter << " others\n";
    return 0;
}
