#include <iostream>
using namespace std;
int main () {
	int n; 
	int counter=1;
	int sum;
	int temp;
	cout << "enter a positive integer\n";
	cin >> n;

	if (n<0)
		return 0;
	while (counter<=n){
	for (int i = 1; i <=counter; i++)
	{
		
		cout << i;
		sum =sum + i;}
	cout << " the sum is " << sum << "\n";
	counter++;
	sum = 0;}
	return 0;}
		
			
