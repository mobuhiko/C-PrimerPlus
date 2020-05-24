#include <iostream>
using namespace std;

int main() {
	
	float height_inch, height_feet, height_meter;
	float weight_pound, weight_kilogram;
	const int feet2inch = 12;
	const float inch2meter = 0.0254;
	const float kilogram2pound = 2.2;
	

	cout << "enter your height in feet and inches\n";
	cin >> height_feet;
	cin >> height_inch;

	cout << "enter your weight in pounds\n";
	cin >> weight_pound;

	height_meter = (height_feet * feet2inch + height_inch) * inch2meter;
	weight_kilogram = weight_pound / kilogram2pound;
	float bmi = weight_kilogram / (height_meter * height_meter);
	cout << "your bmi is " << bmi;

	return 0;
}
