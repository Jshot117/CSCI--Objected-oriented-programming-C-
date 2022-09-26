#include <iostream>
using namespace std;
int main() {
	int x;
	cout << "enter a postitive integer that is 100 or less\n";
	cin >> x;
	if (x >100||x<0) return 0;
	string words[x];
		for(int i= 0; i <=x-1; i++){
	cin >> words[i]; 
		}
		for(int i=x-1;i>=0;i--){
			cout << words[i] << " ";}
	return 0;
}

