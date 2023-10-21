/*
F to C
1. variable declaration
2. input lower, upper, step
3. calculate
4. output
*/

#include <iostream>
using namespace std;

int main() {
	// variable declaration
	double low, upper, step, far, cel;
	
	// input lower, upper, step
	cout << "Lower limit, upper limit, step" << endl;
	cin >> low >> upper >> step;
	
	// calculate
	far = low;
	while(far <= upper) {
		// main calculation
		cel = (far - 32)/9*5;
		cout << "Fah: " << far << " = cel: " << cel << endl;
		far += step;
	}
	
	// c to f
	cel = low;
	while(cel <= upper) {
		far = (cel*5/9) + 32;
		cout << "Cel: " << cel << " = fah: " << far << endl;
		cel += step;
	}
	
}
