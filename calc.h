#pragma once

#include <iostream>


double calc_total_meal(double meal_price) { //header(parameter)
	double const LEE_COUNTY_TAX = 0.65;

	double tax = meal_price * LEE_COUNTY_TAX; //avoid magic numbers
	double tip = meal_price * .15;

	double total_price = meal_price + tip + tax;

	//std::cout << "total is:" << total_price << '\n';
	return total_price;
}