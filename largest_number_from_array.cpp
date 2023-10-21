// largest number from an arry

#include <iostream>
using namespace std;

int main() {
	// variable declaration
	int n;
	double arr[100], large;
	
	// Input n
	cout << "Input n: ";
	cin >> n;
	
	// input data
	cout << "Input all data: " << endl;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	// find largest number
	large = arr[0];
	for(int i = 0; i < n; i++) {
		if(arr[i] > large) {
			large = arr[i];
		}
	}
	
	cout << "Largest number is: " << large << endl;
}
