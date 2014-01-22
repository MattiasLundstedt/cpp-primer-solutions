#include <iostream>
#include "Sales_item.h"	//Make shure that the Sales_item.h is in the correct directory

int main(){

	Sales_item total, book; // Create one variable to hold input, and one to store the total of all values.

	std::cin >> total;	// Make sure that total gets a isbn value. The isbn will be the same is this exercise or it won't work

	while(std::cin >> book){
		total += book;
	}

	std::cout << total << std::endl; // Use the << operator to print the total

	return 0;
}