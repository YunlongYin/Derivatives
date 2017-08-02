#include <iostream>

using namespace std;

int power() {
	cout << "Enter the power to derive: " << flush;
	int power;
	cin >> power;
	return power;
}

int coeff() {
	cout << "Enter the coeff to derive: " << flush;
	int coeff;
	cin >> coeff;
	return coeff;
}

int times() {
	cout << "Enter the times to derive: " << flush;
	int times;
	cin >> times;
	return times;
}


int main() {

	//get input for the values
	int p = power();
	int c = coeff();
	int t = times();

	//derive the values
	for (int i = p; i >= 0 && i >= p - t; i--) {
		if (p > 0) {
			if (t > 0) {
				c = c + p;
				p--;
				t--;
			}
			else {
				c = c;
			}
		}
		else {
			c = 0;
		}
	}

	//return the derived coeff
	cout << "The coeff of the derivative is: " << c << endl;

	return 0;
}
