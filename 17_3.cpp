#include <iostream>
using namespace std;
int sort(int &a,int &b,int &c) {
	int temp;
		if (a<c&&a<b){
		temp=c;
		c=a;
		a=temp;
			if (a<b){
			temp=b;
			b=a;
			a=temp;}
		}
		else if (b<c&&b<c){
		temp=c;
		c=b;
		b=temp;
			if (a<b){
			temp=b;
			b=a;
			a=temp;}
		}

		else{
			if (a<b){
			temp=b;
			b=a;
			a=temp;}}
		return a,b,c;}

int main() {
	int a = 2, b = 7, c = 1;
       	sort(a, b, c);
	cout << a << b << c << endl;
       	return 0;}
			

		
	
