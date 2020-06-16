#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char word[100];
    int word_count = 0;

    cout << "Enter words (to stop, type the word done)\n";
    cin >> word;
    while(strcmp(word, "done") != 0)
    {
       if (bool(cin >> word) == true)
       {
           word_count++;
       }
    }

    cout << "You entered a total of " << word_count << " words.\n";

    return 0;
}
