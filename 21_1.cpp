#include<iostream>
using namespace std;

int main(){
	int num, temp =-1;
	int check[10] = {0,1,2,3,4,5,6,7,8,9};
	cout << "Please enter a positive integer smaller than 100 \n";
	cin >> num;
	cout << "Enter " << num << " single digit integers ";
	int digit[100];
	for ( int i = 0; i <= num-1; i++ ){
		cin >> digit[i];
	}
	cout << "\n You have not entered: ";
	for (int i = 0; i <= 9; i++){
		for (int j = 0; j <= num - 1; j++){
			if (check[i] == digit[j]){
				temp = check[i];
			}
			if (j == num-1 && temp != check[i]){
				cout << check[i] << ", ";
			}
		}
	}
	return 0;
}                                  
