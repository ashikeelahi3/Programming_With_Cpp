// greatest common divisor (GCD)
#include <iostream>
using namespace std;

int main() {
	int num1, num2, GCD, low, high, mod;
	
	cout << "Input two numbers: ";
	cin >> num1 >> num2;
	
	if(num1 > num2) {
		low = num2;
		high = num1;
	} else {
		low = num1;
		high = num2;
	}
	mod = 1; // Just taken any arbitary value... 
	
	while(mod != 0) {
		mod = high%low;
		high = low;
		low = mod;
	}
	
	GCD = high;
	
	cout << "GCD between " << num1 << " and " << num2 << " is " << GCD << endl;
}
