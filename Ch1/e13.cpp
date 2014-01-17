#include <iostream>

int main (){

	std::cout << "Exercise 9: " << std::endl;
	int sum = 0;
	for( int i = 50 ; i <= 100 ; i++)
		sum += i;

	std::cout << "The sum of all numbers between 50 and 100 is " << sum << std::endl;

	std::cout << "Exercise 10: " << std::endl;

	for(int i = 10 ; i >= 0 ; i--)
		std::cout << i << std::endl;

	std::cout << "Exercise 11: Input 2 integers" << std::endl;
	int i1 = 0, i2 = 0;
	std::cin >> i1 >> i2;

	for ( int i = i1 ; i <= i2 ; i++)
		std::cout << i << std::endl; // Assuming the user puts the smallest integer first. To cover all cases, at least one if-statement is necessary
	
	return 0;	
}