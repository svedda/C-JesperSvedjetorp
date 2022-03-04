#include <iostream>

using namespace std;




int main() {
	int nmbr1;
	int nmbr2;

	cout << "Insert a number: ";
	cin >> nmbr1;

	cout << "Insert another number: ";
	cin >> nmbr2;

	nmbr1 ^= nmbr2;
	nmbr2 ^= nmbr1;
	nmbr1 ^= nmbr2;

	cout << "The second submitted integear was: " << nmbr1 << ", and the first one was " << nmbr2;


	

	

}


