#include <iostream>

int main (){
	int i = 50, sum = 0;

	while( i <= 100){
		sum += i;
		i++;
	}

	std::cout << "The sum of all numbers between 50 and 100 is " << sum << std::endl;
	
	return 0;	
}