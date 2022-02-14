#include <iostream>



using namespace std;
// Celsius * 9 / 5 + 32.

int main() {
	double celsius;
	cout << "Type a number in celsius to convert to fahreinheit then press enter: ";
	cin >> celsius;

	double fahr = celsius * 9 / 5.0f + 32;

	cout << "The temp of fahrenheit is: " << fahr << endl;
}