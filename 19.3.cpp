#include <iostream>
using namespace std;
int biggestDigit(int num){
	if (num < 10) return num;
	if (num%10 > biggestDigit(num/10)) return num % 10;
		return biggestDigit(num/10);}
int main() {
	cout << biggestDigit(29) << endl;
	cout << biggestDigit(31415) << endl;
	cout << biggestDigit(7) << endl;
	return 0;
	}
