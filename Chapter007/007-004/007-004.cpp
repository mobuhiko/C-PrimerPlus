// lotto.cpp -- probability of winning
#include <iostream>
#include <iomanip> // make result into percentage format
// Note: some implementations require double instead of long double
// probality here actally means the sample space (total number of possible events)
long double probability_1(unsigned int numbers, unsigned int picks);
long double probability_2(unsigned int numbers, unsigned int picks);
long double total_probability(unsigned int numbers_1, unsigned int picks_1, unsigned int numbers_2, unsigned int picks_2);

int main()
{
    using namespace std;
    unsigned int total_1, choices_1;
    unsigned int total_2;
    unsigned int choices_2 = 1;

    cout << "Enter the total number of choices for the field number, and the number of picks allowed:\n";
    while ((cin >> total_1 >> choices_1) && choices_1 <= total_1)
    {
        cout << "Enter the total numbers of choices for the mega number\n";
        cin >> total_2;
        while(total_2 <= choices_2)
        {
            cout << "Enter the total numbers of choices for the mega number\n";
            cin >> total_2;
        }
        cout << "You have one chance in ";
        cout << total_probability(total_1, choices_1, total_2, choices_2);
        cout << " of winning, ";
        cout << "which means " << setiosflags(ios::fixed) << 100 * (1 / total_probability(total_1, choices_1, total_2, choices_2)) << "%\n";
        cout << "Next two numbers for the field number and the picks(q to quit): ";
    }

    cout << "bye\n";
    return 0;
}
// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability_1(unsigned int numbers, unsigned int picks)
{
    long double result = 1.0;
    // here come some local variables
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ;
    return result;
}

long double probability_2(unsigned int numbers, unsigned int picks)
{
    long double result = 1.0;
    // here come some local variables
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ;
    return result;
}

long double total_probability(unsigned int numbers_1, unsigned int picks_1, unsigned int numbers_2, unsigned int picks_2)
{
    long double result = probability_1(numbers_1, picks_1) * probability_2(numbers_2, picks_2);
    return result;
}
