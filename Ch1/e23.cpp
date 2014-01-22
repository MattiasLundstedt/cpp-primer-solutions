#include <iostream>
#include "Sales_item.h"	//Make shure that the Sales_item.h is in the correct directory

int main(){

	Sales_item total, book;
	int count = 0;

	std::cin >> total;	
	count++;

	while(std::cin >> book){

		if( total.isbn() == book.isbn() ){	// If the input isbn is the same as previous, keep grouping
			total += book;
			count++;
		}
		else{ //If not same as previous isbn, reset counter, the total and print what has been put in this far

			std::cout << total << " and a total of " << count << " transactions" << std::endl;
			total = book;
			count = 1;
		}
	}

	//Make sure the last transactions are printed 
	std::cout << total << " and a total of " << count << " transactions" << std::endl;

	return 0;
}