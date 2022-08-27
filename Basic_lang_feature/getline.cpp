#include<iostream>

using namespace std;

int main() {
	char buff[512];
	cout << "Enter your address:\n";
	cin.getline(buff, 78, '\n');
	cout << "Your address is: " << buff << endl;
	return 0;
}