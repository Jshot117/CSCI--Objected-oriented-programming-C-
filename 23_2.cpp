#include <iostream>
#include <ctime>
using namespace std;

void randFill(int x[], int cap){
	  srand(time(0));
	    for (int i =0;i< cap;i++)
		      x[i]=(rand()%99+10);
	      
}
int main() {
	    int x[5];
	        randFill(x, 5);
		    for (int i = 0; i < 5; i++)
			        cout << x[i] << " "; // prints 5 random numbers
		        cout << endl; // such as 93 73 12 69 40
			    return 0;
}
