#include <iostream>
using namespace std;
void insertionSort(int arr[],int cap){ 
	for (int i =0;i< cap;i++){
		 int a = i;
		 int data = arr[i];
		 while(data< arr[a-1] && (a>0)){
			  int temp= arr[a];
			  arr[a]= arr[a-1];
			  arr[a-1]=temp;
			   a--;
		 }
	}
}
int main(){
	int x[]= {5,6,3,1,2,4};
	insertionSort(x,6);
	int y=0;
	for ( y= 0;y<6;y++)
		cout << x[y]<< endl;
	return 0;
}
 
