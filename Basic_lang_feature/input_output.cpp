#include<iostream>

int main() {
	char buff[512];
	std::cout << "Enter your name:\n ";
	std::cin >> buff;
	std::cout << "Your name is: " << buff << std::endl;
}