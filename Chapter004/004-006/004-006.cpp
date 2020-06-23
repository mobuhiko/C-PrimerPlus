#include <iostream> 
#include <string>
#include <cstring>
using namespace std;

struct CandyBar {
	string brand;
	float weight;
	int calorie;
};

int main() {
	
	CandyBar snack[3];
	snack[0] = { "Chip", 100, 1000 };
	snack[1] = { "Mocha Munc", 2.3, 350 };
	snack[2] = { "Chocolate", 5.8, 648 };

	for (unsigned int i = 0; i < 3; i++) {
		cout << "Brand: " << snack[i].brand << endl;
		cout << "Weight: " << snack[i].weight << endl;
		cout << "Calorie: " << snack[i].calorie << endl;
		cout << endl;
	}

	return 0;
}
