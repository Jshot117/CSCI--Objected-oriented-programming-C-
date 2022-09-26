#include <iostream>
#include <cstring>
using namespace std;
int main() {
	string firstName;
	string lastName;
	cout << "type your first name\n";
	cin >> firstName;
	cout << "type your last name\n";
	cin >> lastName;
	for (int i =0; i<=firstName.length()&&lastName.length();i++){
		firstName[i]=tolower(firstName[i]);
		lastName[i]=tolower(lastName[i]);}
	if (firstName[0]=='a'||firstName[0]=='e'||firstName[0]=='i'|| firstName[0]=='o'||firstName[0]=='u'){
		firstName[0]=toupper(firstName[0]);
		cout << firstName + "way"<< endl;}
	else {
		int temp=firstName[0];
		firstName[1]=toupper(firstName[1]);
		cout << firstName.erase(0,1)<<(char)temp<<"ay" << endl;
	}
	if(lastName[0]=='a'||lastName[0]=='e'||lastName[0]=='i'|| lastName[0]=='o'||lastName[0]=='u'){
		lastName[0]=toupper(lastName[0]);
		cout << lastName + "way"<< endl;}
	else {
		int temp=lastName[0];
		lastName[1]=toupper(lastName[1]);
		cout << lastName.erase(0,1)<<(char)temp<<"ay"<< endl;
	}
	return 0;
}
