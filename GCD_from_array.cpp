// GCD from an array
#include <iostream>
using namespace std;

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


int main() {
	int arr[100], n, GCD;
	
	cout << "Enter the number of data: ";
	cin >> n;
	
	cout << "Enter all the data: " << endl;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	GCD = arr[0];
	for(int i = 1; i < n; i++) {
		GCD = GCDcalc(arr[i], GCD);
	}
	
	cout << "GCD = " << GCD << endl;
}
