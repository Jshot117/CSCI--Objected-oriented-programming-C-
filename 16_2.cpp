#include <iostream>
using namespace std;
int swap2(int x) {
	int y;
	int temp = x - (x % 100);
	x = x % 100;
	if ( x / 10 != 0)	
		y = (x / 10) + ((x % 10) * 10);
	x = temp + y;
	return x; }

int main () {
	cout << swap2(1024) << endl;
	cout << swap2(256) << endl;
	cout << swap2(314) << endl;
	return 0;}

