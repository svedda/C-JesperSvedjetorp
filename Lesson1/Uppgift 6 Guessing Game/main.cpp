#include <iostream>
#include <cstdlib>


using namespace std;

int main() {

	int guess, tries = 0;
	srand(time(NULL));
	int random = rand() % 10 + 1;

	cout << "guess a random number between 1 and 10: " << endl;
	do {
		
	   cin >> guess;
	   tries++;

	   if (guess == random) {
		   cout << "you were correct after " << tries << " tries, good job.";
		   return 1;
		  
	   }
	   cout << "you were wrong guess again: ";
	    

	}
	while (guess != random);
	return 0;
	

}