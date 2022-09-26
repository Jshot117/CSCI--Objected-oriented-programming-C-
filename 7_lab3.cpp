#include <iostream>
using namespace std;
int main () {
	int end = 0;
	int num;
	int counter = 0;
	int counter2 = 0;				       
       	cout << "enter any number between 1 and 100\n";						       
       	cin >> num;
	while ( num != end ) {
		if ( num % 2 == 1) {
			counter = counter + 1;}
		else if ( num % 2 == 0) {
			counter2 = counter2 + 1;}
	cout << "enter another ";
	cin << num; }
	cout << "you had  " << counter << " odd numbers and " << counter2 << " even numbers" << endl;
	return 0; 
        }

