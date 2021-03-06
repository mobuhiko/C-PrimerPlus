/* Programming Exercises 007-010 (Version A) */
#include <iostream>

using namespace std;

double calculate(double x, double y, double(*fun)(double, double));
double add(double x, double y);
double multiply(double x, double y);

int main()
{
	// pointer to add(double x, double y)
	double (*ptr_f1)(double, double); 
	ptr_f1 = add;
	// pointer to multiply(double x, double y)
	double (*ptr_f2)(double, double); 
	ptr_f2 = multiply;

	cout << "Enter 2 numbers\n";
	double a, b;
	while (cin >> a && cin >> b)
	{
		cout << a << " and " << b << ": " << endl;
		cout << "ADD: " << calculate(a, b, add) << endl;
		cout << "MULTIPLY: " << calculate(a, b, multiply) << endl;
		cout << endl;

		cout << "Enter 2 numbers\n";
	}
	return 0;
}

double calculate(double x, double y, double(*fun)(double, double))
{
	return fun(x, y);
}

double add(double x, double y)
{
	return x + y;
}

double multiply(double x, double y)
{
	return x * y;
}

