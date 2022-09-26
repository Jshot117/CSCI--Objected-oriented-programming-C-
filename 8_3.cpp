#include <iostream>
using namespace std;
int main () {
	int grade, counter = 0, total = 0;
	cout << " Enter the test grades,when you are done enter a negative number\n";
	cin >> grade;
	while (grade >= 0) {
		total = total + grade;
	         counter ++;
		cout << "enter another grade, enter a negative number to end\n";
	cin >> grade;}
	if ( grade < 0 ) {
           cout << "The average test score is " << total / counter;}
	return 0;}

