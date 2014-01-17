#include <iostream>

int main(){

	// The standard program. May be edited as you wish.
	int value = 0, sum = 0;
	while(std::cin >> value){
		sum += value;
	}

	std::cout << "The sum is " << sum << std::endl;

	return 0;

}