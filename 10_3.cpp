#include <iostream>
using namespace std;
int main () {
	int x;
	int counter = 1;
	cout << "enter an integer between 1 and 20\n";
	cin >> x;
	while ( x<1 || x>20){ 
		counter++;
		cout << "type a number that is between 1 to 20\n";
		cin >> x;
		if (counter == 10){
			 x = 10;
		break; }
	}
	cout << " the cube of your number is " << x * x * x;
	return 0; }


		
		
