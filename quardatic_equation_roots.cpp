/*
Root of Quardatic equation
1. variable declaration
2. input a, b, c (aX^2 + bX + c = 0)
3. check b^2 - 4ac < 0
4. x1, x2 calculate
5. output
*/

#include <iostream>
#include <cmath>
// for sqrt
using namespace std;

int main() {
	// variable declaration
	double a, b, c, d, x1, x2;
	
	// Input a, b, c
	cout << "Input a, b, c in (aX^2 + bX + c = 0) equation" << endl;
	cin >> a >> b >> c;
	
	// check b^2 - 4ac < 0
	d = (b*b) - 4*a*c;
	
	if(d < 0) {
		cout << "Roots are complex." << endl;
	} else {
		x1 = (-b + sqrt(d))/ (2*a);
		x2 = (-b - sqrt(d))/ (2*a);
		
		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}
}
