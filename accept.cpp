#include <iostream>

bool accept()
{
	char response;
	std::cout << "Are you sure you want to continue? (y/n): " << std::endl;
	std::cin >> response;
	if (response == 'y') return true;
	return false;
}

int main()
{
	bool result = accept();
	std::cout << "Response is " << result << std::endl;
	return 0;
}
