#include<iostream>

int main() {
	char buff[512];
	//char buff1[512];
	std::cout << "Enter your name:\n ";
	std::cin >> buff;
	std::cout << "Your name is: " << buff << std::endl;
	// std::cout << "Enter your address:\n";
	// std::cin.getline(buff1, 64, '\n');
	// std::cout << "Your address is: " << buff1 << std::endl;
}