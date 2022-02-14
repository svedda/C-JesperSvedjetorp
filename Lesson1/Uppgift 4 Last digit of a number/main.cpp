#include <iostream>

using namespace std;

int main() {
	int number, lastDigit;

	cout << "type in a number of integers and let me find the last digit: ";
	cin >> number;

	lastDigit = number % 10;

	cout << "the last digit in the given number was: " << " = " << lastDigit;

	return 0;
}