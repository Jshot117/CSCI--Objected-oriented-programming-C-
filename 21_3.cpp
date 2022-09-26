#include<iostream>
using namespace std;
int main(){
	double num, total=0, average=0;
	cout << "Enter a positive integer at most 100 ";
	cin >> num;
	if ( num<0 || num>100) return 0;
        double digit[100][100];
	for ( int r = 0; r <= num-1; r++){
		cout << "Enter " << num << " rows of " << num << " integers ";
		for (int c =0; c<= num-1; c++){
			cin >> digit[r][c];
		}
	}
	for ( int c = 0; c <= num-1; c++){
		for ( int r = 0; r <= num-1; r++){
			total = total + digit[r][c];
			average = total / num;
		}
		total =0;
		cout << "The average for colume " << c+1 << " is " << average << endl;
	}
	return 0;
}
