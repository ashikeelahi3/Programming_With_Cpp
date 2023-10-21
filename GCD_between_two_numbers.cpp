// greatest common divisor (GCD)
#include <iostream>
using namespace std;

int main() {
	int num1, num2, GCD, low, high;
	
	cout << "Input two numbers: ";
	cin >> num1 >> num2;
	
	if(num1 > num2) {
		low = num2;
		high = num1;
	} else {
		low = num1;
		high = num2;
	}
	
	for(int i = low; i >= 1; i--) {
		if(low%i == 0 && high%i == 0) {
			GCD = i;
			break;
		}
	}
	
	cout << "GCD between " << num1 << " and " << num2 << " = " << GCD << endl;
}
