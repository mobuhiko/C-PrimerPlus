#include <iostream>
#include <array>

using namespace std;

int main() {

	array<double, 3> record;
	
	cout << "Enter your three times' 40m record in second\n";
	for (unsigned int i = 0; i < 3; i++) {
		cin >> record[i];
		cin.get();
	}

	double total_time = 0;
	cout << "Number of times  Time Record   Average Time Record\n";
	for (unsigned int i = 0; i < 3; i++) {
		total_time += record[i];
		cout << i + 1 << "                ";
		cout << record[i] << " second      ";
		cout << total_time / (i + 1) << " second\n";
	}
	cout << "\n";

	return 0;
}
