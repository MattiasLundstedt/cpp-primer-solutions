#include <iostream>

int main (){
	int i1 = 0, i2 = 0;
	std::cin >> i1 >> i2;

	while( i1 <= i2){
		std::cout << i1 << std::endl; // Assuming the user puts the smallest integer first. To cover all cases, at least one if-statement is necessary
		i1++;
	}

	return 0;	
}