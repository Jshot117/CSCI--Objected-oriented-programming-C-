#include <iostream>
using namespace std;
void advance(int x[],int cap){
	int temp = x[cap-1];
	for (int i=cap-1;i>=0;i--){
		    x[i+1]=x[i];}
	x[0]=temp;}
int main(){
	 int x[5] = {3, 1, 4, 1, 5};
	   advance(x, 5);
           cout << x[0] << x[1] << x[2] << x[3] << x[4] << endl; 
	   return 0;
	}

