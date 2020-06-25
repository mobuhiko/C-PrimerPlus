#include <iostream>
#include <cstring>
#include <string>

using namespace std;

template <typename T>
void maxn(T array[], int length);

template <> void maxn(const char* char_str[], int length);
int main()
{
	int array_1[6] = { 1,5,8,16,5,10 };
	double array_2[4] = { 101.0,5.8,65,65.1 };
	const char * array_3[5] = { "Hello", "how", "are", "you", "?" };

	maxn(array_1, 6);
	maxn(array_2, 4);
	maxn(array_3, 5);
	return 0;
}

template <typename T>
void maxn(T array[], int length)
{
	T max = array[0];
	for (int i = 1; i < length; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	cout << "MAX: " << max << endl;
}

template <> void maxn(const char* char_str[], int length)
{
    int str_length[length];
    for(int i = 0; i < length; i++)
    {
        str_length[i] = strlen(char_str[i]);
    }
    int max = str_length[0];
    const char* max_str = char_str[0];
    int address_num = 0;
    for(int i = 0; i < length; i++)
    {
        if(str_length[i] >max)
        {
            max = str_length[i];
            max_str = char_str[i];
            address_num = i;
        }
    }
    cout << "MAX: " << max << endl;
    cout << "STR: " << max_str << endl;
    cout << "ADDRESS: " << &char_str[address_num] << endl;
}
