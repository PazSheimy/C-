//EX1 class2 Cop3003
//Description : mealprise calculator. where tip, tax and meal price are being calculated.
//shows and example of a function prototype, funtion call with an argument, and header with a parameter

#include "iostream"
#include "calc.h"


double calc_total_meal(double meal_price); //function prototype

int main() {
	std::cout << "enter price";
	double meal_price{ };
	std::cin >> meal_price;

	double total_price = calc_total_meal(meal_price);//function call(argument)
	return 0;
}
