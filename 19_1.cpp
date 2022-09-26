#include <iostream>
using namespace std;
int sumCubes(int x){
	int sum = x * x * x;
	if (x<=0) return 0;
	return sumCubes(x-1) + sum;}

int main() {
	cout << sumCubes(10);
	return 0;}
