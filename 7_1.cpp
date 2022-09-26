#include <iostream>
using namespace std;
int main() {
	int x, sum = 0;
	cout << "enter a postive integer\n";
	cin >> x;
	while (x < 0 ) {
		cout << "try again";
		cin >> x; }
	while (x != 0) {
		if (x % 2 == 1) {
			sum = sum + (x % 10);
			x = x / 10; }
		else (x = x / 10);}
	cout << sum;
	return 0;
}
        
