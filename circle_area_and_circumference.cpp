/*
Circle
1. Variable declaration
2. Input r
3. Calculation
4. Output
*/

#include <iostream>
using namespace std;

int main() {
	// Variable declaration
	double r, area, c, PI;
	PI = 3.1416;
	
	// Input r
	cout << "Enter r: " << endl;
	cin >> r;
	
	// Calculation
	area = PI*r*r;
	c = 2*PI*r;
	
	// Output
	cout << "Area: " << area << endl;
	cout << "Circumference: " << c << endl;	
}
