#include <iostream> 
#include <string>
#include <cstring>
using namespace std;

struct Pizza {
	string company;
	float size;
	float weight;
};

int main() {
	int pizza_number = 0;
	cout << "how many company's pizza?\n";
	cin >> pizza_number;
	Pizza* my_pizza = new Pizza[pizza_number];

	for (unsigned int i = 0; i < pizza_number; ++i) {
		cin.get();
		
		cout << "size?\n";
		cin >> my_pizza[i].size;
		
		cout << "company?\n";
		getline(cin, my_pizza[i].company);
		
		cout << "weight?\n";
		cin >> my_pizza[i].weight;
		
		cout << endl;
	}
	
	for (unsigned int i = 0; i < pizza_number; ++i) {
		cout << "Brand: " << my_pizza[i].company << endl;
		cout << "Weight: " << my_pizza[i].size << endl;
		cout << "Calorie: " << my_pizza[i].weight << endl;
		cout << endl;
	}
	
	
	delete [] my_pizza;

	return 0;
}
