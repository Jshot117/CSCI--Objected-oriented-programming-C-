#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int num = rand()%100, x, counter = 0;
	cout << "guess a number between 1-100\n";
	cin >> x;
	while (x < 1 || x > 100) {
		cout << " That is not a valid guess, guess again";
		cin >> x;}
	while (x != num){
	if (num < x) {
		cout << " too big of a guess, try again\n";
		cin >> x;
		counter++;}
	else {
		cout << "too small of a guess, try again\n";
		cin >> x;
		counter++;}
	}
	cout << "it took you " << counter++ << " guess \n";
 	return 0;}
