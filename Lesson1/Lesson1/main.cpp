#include <iostream>



using namespace std;

int add(int a, int b);
int result;


int main(){
	

    int x{12};
    int y{13};
	int* ptr{ &x };
	
	
	cout << "Adress of x: " << &x << endl;
	cout << "Adress of x: " << ptr << endl;
	cout << "Value of x: " << *&x << endl;

}

int add(int a, int b) {
	return a + b;
}