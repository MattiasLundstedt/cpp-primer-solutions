#include <iostream>
#include "Sales_item.h"	//Make sure that the Sales_item.h is in the correct directory

int main(){

	Sales_item book; // Create one variable to hold input

	while(std::cin >> book)
		std::cout << book << std::endl; // Use the << operator to print the input value

	return 0;
}