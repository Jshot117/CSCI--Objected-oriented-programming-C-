#include<iostream>
using namespace std;
int main(){	
     	int n;
        cout << "Enter a positive integer that is less than  100" << endl;
		cin >> n;
		 if(n<0 || n>100){
		    return 0; 
	      	 }
		  int nums[n];
			for(int i=0;i<=n-1;i++){
			cin >> nums[i];
		        }
			 for(int i=0;i<=n-1;i++){
			       if(nums[i]<0){
		                cout << nums[i] << " ";
			       }
			}					        
			 cout << endl;
				   for(int i=n-1;i>=0;i--){
				       if(nums[i]>0){	
					       cout << nums[i] << " ";
										                }
			    	   }			
				   return 0;
}
