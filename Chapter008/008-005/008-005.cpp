#include <iostream>

using namespace std;

template <typename T>
void max5(T array[], int length = 5);

int main()
{
	int array_1[5] = { 1,5,8,6,5 };
	double array_2[5] = { 1.0,5.8,65,65.1,3.65 };
	max5(array_1);
	max5(array_2);
	return 0;
}

template <typename T>
void max5(T array[], int length)
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
