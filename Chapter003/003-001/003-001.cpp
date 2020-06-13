#include <iostream>
using namespace std;

int main() {
	int height_inch;
	cout << "enter your height in inch\n";
	cin >> height_inch;

	const int feet2inch = 12;
	int height_feet = height_inch / feet2inch;
	height_inch = height_inch % feet2inch;
	cout << "you are " << height_feet << " feet "
		<< height_inch << " inches tall.\n";

	return 0;
}
