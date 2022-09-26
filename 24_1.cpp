#include <iostream>
using namespace std;
int main() {
	int i;
	string s= "hello";
	for( i=s.size();i>=0;i--)
		 cout<< s[i];
	cout<<endl<< s.size();
	return 0;
}
