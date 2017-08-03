#include <iostream>
#include <tuple>

using namespace std;

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

	//get input for times and number of terms

	int derivativeTimes, numberOfTerms;

	cout << "Enter the times to derive: " << flush;
	cin >> derivativeTimes;

	cout << "Enter the number of terms in the equation to derive: " << flush;
	cin >> numberOfTerms;

	//creat arrays

	int* termPowers = new int[numberOfTerms];
	int* termCoeffs = new int[numberOfTerms];

	//get inputs for powers and coeffs

	for (int i = 0; i < numberOfTerms; i++) {

		cout << "Enter the coeff for term " << i + 1 << ": " << flush;
		int termCoeff;
		cin >> termCoeff;

		cout << "Enter the power for term " << i + 1 << ": " << flush;
		int termPower;
		cin >> termPower;

		//run the calculation

		int ctPower, ctCoeff, ctTimes;
		tie(ctPower, ctCoeff, ctTimes) = derivative(termPower, termCoeff, derivativeTimes);

		//store inputs into arrays

		termPowers[i] = ctPower;
		termCoeffs[i] = ctCoeff;
	}

	//print out the data

	cout << "The result = " << termCoeffs[0] << "x^" << termPowers[0];

	for (int i = 1; i < numberOfTerms; i++) {
		cout << "+" << termCoeffs[i] << "x^" << termPowers[i];
	}

	cout << endl;

	//delete arrays from memory

	delete[] termPowers;
	delete[] termCoeffs;

	return 0;
}
