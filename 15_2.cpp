#include <iostream>
using namespace std;
double countChange(int q, int d, int n ,int p){
	double answer = 0;
	answer += q * .25;
	answer += d * .10;
	answer += n * .05;
	answer += p * .01;
	return answer;
}
int main (){
	int q = 10, d= 5, n=1, p=2;
	double x= countChange(q,d,n,p);
	cout << "you have $" << x << endl;
	return 0; }

