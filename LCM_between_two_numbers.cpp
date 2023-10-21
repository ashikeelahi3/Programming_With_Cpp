// LCM
#include <iostream>
using namespace std;

// Calculate GCD
int GCDcalc(int num1, int num2) {
	int low, high, mod;
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
	return high;
}

// Calculate LCM
int LCMcalc(int num1, int num2) {
	// a * b = LCM * GCD
	// LCM = (a*b)/GCD
	
	int GCD = GCDcalc(num1, num2);
	return  (num1 * num2) / GCD;
}

int main() {
	int num1, num2, LCM;
	num1 = 15;
	num2 = 20;
	
	LCM = LCMcalc(num1, num2);
	cout << "LCM between " << num1 << " and " << num2 << " = " << LCM << endl;
}
