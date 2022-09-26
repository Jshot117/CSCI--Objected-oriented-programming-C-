#include <iostream>
using namespace std;
int main () {
	int end = 0;
	int num, total;
	cout << "enter price of first item\n";
	cin >> num;
	while ( num != end) {
	       cout << "enter next price, enter 0 if there are no more items\n";
	       total = num + total;  
               cout << "enter another number\n"; 
	       cin >> num; }
	       if ( total >= 100) {
		       cout << "thats expensive\n"; }
			       cout << "your total is " << total << endl;
	       return 0; }
