#include <iostream>
double ly2au(double light_years);

int main(void) {
	using namespace std;

	double light_years, astronomical_units;
	cout << "Enter the number of light years: ";
	cin >> light_years;

	astronomical_units = ly2au(light_years);

	cout << light_years << " light years = "
		<< astronomical_units << " astronomical units. ";
	return 0;
}

double ly2au(double light_years) {
	return light_years * 63240;
}
