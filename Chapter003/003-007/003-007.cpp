#include <iostream>
using namespace std;

int main() {
	float distance_kilometer, gasoline_liter;
	float distance_mile, gasoline_gallon;
	cout << "enter the distance in kilometer: ";
	cin >> distance_kilometer;
	cout << "enter the gasoline consumed in liter: ";
	cin >> gasoline_liter;
	distance_mile = (distance_kilometer / 100) * 62.14;
	gasoline_gallon = gasoline_liter / 3.875;
	cout << "MPG: " << distance_mile / gasoline_gallon << "mpg\n";

	return 0;
}
