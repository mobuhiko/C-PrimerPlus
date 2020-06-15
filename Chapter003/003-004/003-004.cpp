#include <iostream>
using namespace std;

int main() {
	
	long long int input_second;
	cout << "Enter the number of seconds: ";
	cin >> input_second;

	int day, hour, minute, second;
	const int DAY2HOUR = 24;
	const int HOUR2MINUTE = 60;
	const int MINUTE2SECOND = 60;
	day = ((input_second / MINUTE2SECOND) / HOUR2MINUTE) / DAY2HOUR;
	hour = ((input_second / MINUTE2SECOND) / HOUR2MINUTE) % DAY2HOUR;
	minute = (input_second / MINUTE2SECOND) % HOUR2MINUTE;
	second = input_second % MINUTE2SECOND;
	cout << input_second << " seconds = "
		<< day << " days, " << hour << " hours, " 
		<< minute << " minutes, " 
		<< second << " seconds\n";

	return 0;
}
