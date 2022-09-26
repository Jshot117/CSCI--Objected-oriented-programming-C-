#include <iostream>
using namespace std;
int main() {
	int s, temp, r=1, c=1;
	cout << "enter a positive odd number to see an __ length and __ width sized x\n";
	cin >> s;
	if (s < 0 || s % 2 == 0) {
		cout << " you have entered a invalid number, see ya\n";
		return 0;}
	for (r = 1, temp = s; r <= s; r++, temp--) {
		for ( c = 1; c <= s; c++ ) {
			if ( c <= s / 2 && ( c == r || c == temp)) {
				cout << "+";}
			else if (c > s / 2 + 1 && (c == r || c == temp)) {
				cout << "x";}
			else if ( c == temp && c == r) {
				cout << "*";}
			else  cout << " ";}
		cout << "\n";	}
	return 0; }
