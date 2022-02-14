#include <iostream>
#include <cmath>



using namespace std;

int myAbs(int a) {
	int x = sqrt(pow(a, 2));
	return x;
}
int main(){
	

    int x;
    int y;

	cout << "Type an integer: ";
	cin >> x;
	cout << "Type an integer again: ";
	cin >> y;
	
	int diff = myAbs(x - y);
	
	cout << "The difference between your integers are: " << diff << endl;

}


