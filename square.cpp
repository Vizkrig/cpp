#include <iostream>

int square(int number)
{
	return number * number;
}

int main()
{
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	std::cout << "Square of " << number << " is " << square(number) << std::endl;
}
