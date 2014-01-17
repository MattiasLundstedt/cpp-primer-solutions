#include <iostream>

/*
 The statement is not legal!
 You'll need to insert the std::cout operand to the left of the <<-operator
*/

int main(){
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;

	std::cout << "The sum of " << v1;
	<< " and " << v2; // There is no left operand here!
	<< " is " << v1 + v2 << std::endl; // And here!
	return 0;
}