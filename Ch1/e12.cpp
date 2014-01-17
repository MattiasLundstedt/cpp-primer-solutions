#include <iostream>

/*
	Program sums all numbers between -100 and 100. Since there is one negative number for every positive, 
	the final sum should be zero.
*/
int main(){
	
	int sum = 0;

	for( int i = -100; i <= 100 ; i++ ){
		sum += i;
	}

	std::cout << "Final value of sum is " << sum << std::endl;
	return 0;
}