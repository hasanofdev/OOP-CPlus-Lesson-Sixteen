#include<iostream>
#include<vector>
using namespace std;


#include"Models.h"


int main() {

	vector<Car*> cars;
	cars.push_back(new Manual(6, "Manual", "Lada", "Vaz2107", 2011));
	cars.push_back(new Manual(6, "Manual", "Lada", "Vaz2106", 2011));
	cars.push_back(new Automatic(4, "Automatic", "BMW", "M5", 2017));
	cars.push_back(new Automatic(4, "Automatic", "Mercedes", "C220", 2011));
	
	for (size_t i = 0; i < cars.size(); i++)
	{
		cars[i]->to_string();
	}
}