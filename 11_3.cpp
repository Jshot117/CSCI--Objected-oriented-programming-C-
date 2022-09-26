#include <iostream>
using namespace std;
int main () {
	int n = 1;
	int counter = 1;
	int temp = 1;
	int sum;
	while (counter <= 10) {
		for (int i = counter; i <= counter * counter; i++)

		{
		     	sum = sum + i;
			cout << " " << i;}
	cout << " the sum is " << sum << "\n";
	counter++;
	temp = counter;
	sum = 0;}
	return 0;}

