#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string word;
    int word_count = 0;

    cout << "Enter words (to stop, type the word done)\n";
    cin >> word;
    while(word != "done")
    {
       if (bool(cin >> word) == true)
       {
           word_count++;
       }
    }

    cout << "You entered a total of " << word_count << " words.\n";

    return 0;

}
