#include <iostream>
using namespace std;

bool primeTest(int num) {
	int counter = 0;
	for (int i=1; i <= num; i++)
	{
		if (num % i == 0) {
			counter++;
		}
	}
	if (counter <= 2) {
		return true;
	}
	else { return false;
	}
	counter = 0;
}

void primeTable()
{

	for (int i = 1; i <= 20; i++) {
		if (primeTest(i) == true) {

			for (int g = 1; g <= 20; g++) {
				if (primeTest(g) == true) {
					if (i % 10 == 5 && g%10!=5 && (i * g) % 10 != 5) {
						cout << "dog" << " * " << g << " == " << i * g << endl;
					}
					else if (g % 10 == 5 && i % 10 != 5 && (i * g) % 10 != 5) {
						cout << i << " * " << "dog" << " == " << i * g << endl;
					}
					else if (i % 10 == 5 && g % 10 == 5 && (i * g) % 10 != 5) {
						cout << "dog * dog == " << i * g << endl;
					}
					else if (i % 10 == 5 && g % 10 != 5 && (i*g)%10==5) {
						cout << "dog" << " * " << g << " == " << "dog" << endl;
					}
					else if (g % 10 == 5 && i % 10 != 5 && (i*g)%10==5) {
						cout << i << " * " << "dog" << " == " << "dog" << endl;
					}
					else if (i % 10 == 5 && g % 10 == 5&&(i*g)%10==5) {
						cout << "dog * dog == " << "dog" << endl;
					}

					else {
						cout << i << " * " << g << " == " << i * g << endl;
					}
				}


			}
		}
	}
}
int main() {
	    primeTable();
}
