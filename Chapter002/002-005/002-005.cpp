#include <iostream>
float C2F(float c);


int main(void) {
	using namespace std;

	float temperature_celsius, temperature_fahrenheit;
	cout << "Please enter a Celsius value: ";
	cin >> temperature_celsius;
  
	temperature_fahrenheit = C2F(temperature_celsius);
  
	cout << temperature_celsius << " degrees Celsius is "
		<< temperature_fahrenheit << " degrees Fahreheit";
	return 0;
}

float C2F(float c) {
	float f = 1.8 * c + 32.0;
	return f;
}
