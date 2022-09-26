#include <iostream>
using namespace std;
int useRecursion (int a){
	if (a>-10&&a<10) return a;
	if (a>-100&&a<100) return (a/10) + (a%10);
	return useRecursion (a/10);}

int main() {
	    cout << useRecursion(567982) << endl; 
	        cout << useRecursion(107982) << endl;
		    cout << useRecursion(7) << endl; 
		        return 0;
}
