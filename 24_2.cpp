#include <iostream>
using namespace std;
int main(){
	string resp;
	cout << "write a at most 100 character response\n";
	cin >> resp;
	if (resp.size()>=100)return 0;
	cout<< "all lowercase = ";
	for (int i=0;i<=resp.size();i++){
		if (resp[i]<91&& resp[i]>64)
			cout<<(char) (resp[i] + 32);
		else cout<<resp[i];}
	cout<< "\nall uppercase = ";
	for (int i=0;i<=resp.size();i++){
		if (resp[i]>96 && resp[i]<123)
			cout << (char)(resp[i]-32);
		else cout << resp[i];}
	return 0;
}

