#include <iostream>

// 0
long double sum_value()
{ 
    return 0;
}

// 1
template<typename T>
long double sum_value(const T& value)
{
	return value;
}

// more than 1
template<typename T, typename...Args>
long double sum_value(const T& value, const Args& ... args)
{
	return value + sum_value(args...);
}


int main()
{
    int n = 100;
    double m = 99.66;
    long y = 100000;
    char ch = 'x';
    float f = 5.15;
    std::cout << sum_value(n, m, y, ch, 'A', 77, 99.52, f);

    return 0;
}
