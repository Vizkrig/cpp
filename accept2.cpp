#include <iostream>

bool accept2() {
	char answer;
	std::cout << "Do you want to proceed? (y/n): " << std::endl;
	std::cin >> answer;
	
	switch(answer) {
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			std::cout << "I'll take that as a `no`" << std::endl;
			return false;
	}
}

int main() {
	bool response = accept2();
	std::cout << "Response is " << response << std::endl;
	return 0;
}
