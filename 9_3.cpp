#include <iostream>
using namespace std;
int main () {
	int x, y;
	cout << "enter the first positive integer\n";
	cin >> x;
	cout << "enter the second postive integer\n";
	cin >> y;
	if ( x >= y ) {
		for ( int c = 1; c <= x; c++)
			cout << "X";
	} 
	else {
		for ( int c2 = 2; c2 <= y; c2++) 
			cout << "X"; }
	return 0; }
	

