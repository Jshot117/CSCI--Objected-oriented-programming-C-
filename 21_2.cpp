#include<iostream>
using namespace std;

int main(){
	int num, max =0;
	cout << "Enter a positive integer that is at most 100 \n";
	cin >> num;
		if ( num < 0 || num > 100 ){
		return 0;
	}
	int digit[100][100];
		for ( int i =0; i <= num-1; i++){
			cout << "Enter " << num << " integers ";
				for ( int j = 0; j <= num-1; j++){
					cin >> digit[i][j];
		}
	}
	for ( int i = 0; i <= num-1; i++ ){
		for (int j = 0; j<=num-2; j++){
			if ( digit[i][j] >= digit[i][j+1] && digit[i][j] >= max){
				max = digit[i][j];
			}
			else if (digit[i][j] <= digit[i][j+1] && digit[i][j+1] >= max){
				max = digit[i][j+1];
			}
		}
		cout << "The max in " << i + 1 << " is " << max << endl;
	}
	return 0;
}
