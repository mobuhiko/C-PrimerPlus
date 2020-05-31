#include <iostream> 
#include <string>
#include <cstring>
using namespace std;

struct Candybar {
	string brand;
	float weight;
	float calorie;
};

int main() {
	int snack_number = 0;
	cout << "how many snack?\n";
	cin >> snack_number;
	Candybar* snack = new Candybar[snack_number];

	for (unsigned int i = 0; i < snack_number; ++i) {
		cin.get();
		cout << "company?\n";
		getline(cin, snack[i].brand);
		
		cout << "weight?\n";
		cin >> snack[i].weight;
		
		cout << "calorie?\n";
		cin >> snack[i].calorie;
		
		cout << endl;
	}
	
	for (unsigned int i = 0; i < snack_number; ++i) {
		cout << "Brand: " << snack[i].brand << endl;
		cout << "Weight: " << snack[i].weight << endl;
		cout << "Calorie: " << snack[i].calorie << endl;
		cout << endl;
	}
	
	delete [] snack;

	return 0;
}
