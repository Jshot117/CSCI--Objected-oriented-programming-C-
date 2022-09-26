#include <iostream>
using namespace std;
int main () {
	int num;
	cout << "give me a four digit number" << endl;
	cin >> num;
	cout << num % 10;
	num = num / 10;
	cout << num % 10;
	num = num / 10;
	cout << num % 10;
	num = num / 10;
	cout << num % 10;
	num = num / 10;
	return 0; }
