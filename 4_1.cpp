#include<iostream>
using namespace std;
int main(){
	int A, B, C;
	cout << "enter three individual numbers \n";
	cin >> A >> B >> C;
	if ((A < B) && (B < C)){
		cout << "increasing \n";}
	else if (( B < A ) && ( B > C)){
		cout << "decreasing";}
	else { cout << "neither"; }
	return 0; 
}


	
