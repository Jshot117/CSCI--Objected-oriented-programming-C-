#include <iostream>
using namespace std;
int main(){ 
	int x;
        cout << "Enter a positive integer that is at most 100" << endl;
	        cin >> x;
		        if(x<0 || x>100){
				                return 0;}
	cout << "type in the lengths of the rows  "; 					        
        int rows[x];
	        for(int i=0;i<=x-1;i++){
		 cin >> rows[i]; }
        for(int i=0;i<=x-1;i++){
		for(int a=0;a<=rows[i]-1;a++){
			cout << "*";                }
	         cout << endl;		        }
        return 0;
	}
