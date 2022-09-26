#include <iostream>
using namespace std;
int twoPart(int x) {
	if (x <= 1) return 1;
	if (x % 2 == 0) {
 	return 2  * twoPart(x/2);}
}
int main(){
	cout << twoPart(16) << endl;
       	cout << twoPart(666) << endl;
	cout << twoPart(456) << endl;
	return 0;
}
