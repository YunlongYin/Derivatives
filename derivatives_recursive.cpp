#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int, int> input() {

	int power, coeff, times;

	cout << "Enter the positive power to derive: " << flush;
	cin >> power;

	cout << "Enter the coeff to derive: " << flush;
	cin >> coeff;

	cout << "Enter the times to derive: " << flush;
	cin >> times;

	return make_tuple(power, coeff, times);
}

tuple<int, int, int> derivative(int p, int c, int t) {

	if (t <= 0) {
		return make_tuple(p, c, t);
	}
	else {
		int pow, coe, tim;
		int derivedCoeff = c * p;
		tie(pow, coe, tim) = derivative(--p, derivedCoeff, --t);
		return make_tuple(pow, coe, tim);
	}
}


int main() {

	//get input for the values
	int p, c, t;
	tie(p, c, t) = input();

	//derive the values
	int po, co, ti;
	tie(po, co, ti) = derivative(p, c, t);

	//print the derived values
	cout << "The power of the derivative is: " << po << endl;
	cout << "The coeff of the derivative is: " << co << endl;

	return 0;
}
