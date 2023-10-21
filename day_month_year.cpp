/*
Day month year
1. Variable declaration
2. Input day
3. Calculation
4. Output
*/

#include <iostream>
using namespace std;

int main() {
	// Variable declaration
	int days, month, year;
	
	// Input day
	cout << "Input day: ";
	cin >> days;
	
	// Calculation
	year = days / 365;
	days = days % 365;
	
	month = days / 30;
	days = days % 30;	
	
	// Output
	cout << "Year: " << year << endl;
	cout << "Month: " << month << endl;
	cout << "Days: " << days << endl;
}
