#include <iostream>
using namespace std;
int main() {
	double num, x = 1, ans;
	cout << "Enter a number greater than 100 and I will tell you all numbers less than that number that can be squared." << endl;
	cin >> num;
	while (num <= 100) {
		cout << "Please enter a number greater than 100" << endl;
		cin >> num;
	}
	while ((num > 100) && (x * x < num)) {
		cout << x << "^2 = " << x * x << endl;
		x++;
	}
	return 0; }
