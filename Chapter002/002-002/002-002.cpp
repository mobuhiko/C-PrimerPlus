#include <iostream>

int main() {
	using namespace std;
	double distance_long;
	cout << "enter a distance in long" << endl;
	cin >> distance_long;
	cout << distance_long << " long is " 
		<< distance_long * 220 << " yards" 
		<< endl;

	return 0;
}
