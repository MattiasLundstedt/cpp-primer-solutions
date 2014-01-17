#include <iostream>

/*
First one OK!
Second one OK!
Third one NOT OK! The one quote outside the comment is mismatched, and the text
until the next quote sign is treated as a string.
Fourth one OK! (If third one is modified)
*/


int main(){

	// Fixed code
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */"; //Insert a quote here
	std::cout << /*  "*/" /* "/*"  */;
	return 0;
}