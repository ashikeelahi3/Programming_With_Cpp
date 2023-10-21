/*
Factorial
1. variable declaration
2. input n
3. calculate fact
4. output
*/

#include <iostream>
using namespace std;

int main() {
	// variable declaration
	int fact, n;
	
	// input n
	cout << "Enter n" << endl;
	cin >> n;
	
	// calc
	fact = 1;
	for(int i = 1; i <= n; i++) {
		fact *= i;
	}
	
	// output 
	cout << n << "! = " << fact << endl;
	
}
