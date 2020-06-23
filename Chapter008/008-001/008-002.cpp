#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct s_candybar
{
	char brand[100]; // string brand ~ TRUE
	double weight;
	int calories;
};

void create(s_candybar & candybar, const char* candybar_name = "Millennium Munch", const double candybar_weight = 2.85, const int candybar_calories = 300);

void display(const s_candybar& candybar);

int main()
{
	s_candybar my_candybar[3];
	create(my_candybar[0]);
	create(my_candybar[1], "Dove", 3.0, 500);
	create(my_candybar[2], "KitKat");
	for (int i = 0; i < 3; i++)
	{
		display(my_candybar[i]);
	}
	return 0;
}

void create(s_candybar & candybar, const char* candybar_name, const double candybar_weight, const int candybar_calories)
{
	strcpy(candybar.brand, candybar_name); // candybar.name = candybar_name; ~ FALSE
	candybar.weight = candybar_weight;
	candybar.calories = candybar_calories;
}

void display(const s_candybar& candybar)
{
	cout << candybar.brand << ": " << endl;
	cout << "Weight: " << candybar.weight << endl;
	cout << "Calories: " << candybar.calories << endl;
	cout << endl;
}
