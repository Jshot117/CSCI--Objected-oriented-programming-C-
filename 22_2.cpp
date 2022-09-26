#include <iostream>
using namespace std;
int maxRow(int x[][5],int row, int col){
	int i,j;
	int counter2=0,counter3=0;
	for ( i=0;i<=row;i++){
		 for ( j=0;j<=col;j++)  {
			   int counter=0;
			     if (x[i][j] > 0)
				         counter++;
			       if (counter > counter2){
				           counter= counter2;
					        counter3=i;
						    }
			         }
		   return counter3;
		     }
}
  int main(){
	      int x[2][5] =  {{-1, -2, 1, -3, 5}, {-5, -6, -4, -7, -8}} ;
	          cout << maxRow(x, 2, 5) << endl;
		      return 0;
  }
