#include <iostream>
using namespace std;
int main() {
	double num, counter = 0, multiplier = 0;
	cout << " Enter a number between 1 and 100 and I will tell you its first 20 multiples." << endl;
	cin >> num;
	while ((num < 1) || (num > 100)) {
		cout << "Please enter a number between 1 and 100." << endl;
		cin >> num;
	}
	cout << "The next 20 multiples of " << num << " are:" << endl;
	while (counter <= 20) {
		counter++;
		multiplier++;
		cout << num * multiplier << ", ";
	}
	return 0;
}
