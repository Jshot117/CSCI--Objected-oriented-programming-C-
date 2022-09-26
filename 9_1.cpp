#include <iostream>
using namespace std;
int main () {
	int x;
	cout << "enter a integer\n";
	cin >> x;
	
	for ( int c = 1; c <= x; c++ ) {
	       if ( c % 2 == 0){
		       cout << " -" << c;}
	       else 
		  cout << " " << c;}
	return 0; }

