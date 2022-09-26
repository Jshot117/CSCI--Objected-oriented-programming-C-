#include <iostream>
using namespace std;
int main() {
	int x, y;
	cout << "type in a large integer\n";
	cin >> x;
	for (int c = 1; c<=4;c++)
	{
		cout << " type a smaller digit\n";
		cin >> y;
		if ( y>=x ) {
			cout << "goodbye";
			break;}
		else int x = y;
	}	return 0; }
