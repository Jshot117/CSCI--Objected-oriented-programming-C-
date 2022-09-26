#include <iostream>
using namespace std;
int main () {
	int num;
        int OddCounter = 0; 
	int y;
	cout << " enter one positve integer";
	cin >> num;
	for ( int x = 1; x <= num; x++) {
		cout << "enter another number";
		cin >> y;
		if ( y % 2 == 1 ) {
			OddCounter ++;}
	}
	cout << " you had " << OddCounter<< " odd numbers";
	return 0;
}
