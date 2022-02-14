#include <iostream>

using namespace std;

int main() {
	int nmbr;

	cout << "enter an integer: ";
	cin >> nmbr;

	if (nmbr % 2 == 0) {
		cout << nmbr << " is an even number.";
	}
	else {
		cout << nmbr << " is an odd number.";
	}
	return 0;

}

