#include <iostream>
using namespace std;

int thirdDigit(int a) {
	if ( a < 1000 ) 
		return a%10;
	if (a> 1000)return thirdDigit(a/10);
	return a;}
int main(){
	cout << thirdDigit(777) << " " << thirdDigit(2048) << " " << thirdDigit(500125) << endl;
	    return 0;

}
