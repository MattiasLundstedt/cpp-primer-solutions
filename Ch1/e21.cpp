#include <iostream>
#include "Sales_item.h"	//Make shure that the Sales_item.h is in the correct directory

int main(){

	Sales_item book1, book2; // Create two variabels to hold the input

	std::cin >> book1 >> book2;

	std::cout << book1 + book2 << std::endl; // Use the << operator to print the total

	return 0;
}