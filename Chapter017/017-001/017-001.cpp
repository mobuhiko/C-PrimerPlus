#include <iostream>
using namespace std;

int main()
{
   cout << "enter something until \"$\" \n";
   int count = 0;
   char input;
   while(cin >> input)
   {
       if(input == '$')
           break;
       else
           ++count;
   }
   cout << count << " characters\n";
   return 0;
}
