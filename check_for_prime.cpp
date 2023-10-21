// Check if a number is prime
#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a integer number to check is it prime or not" << endl;
	cin >> num;
	
	for(int i = 2; i <= num/2; i++) {
		if(num%i == 0) {
			cout << "It is not a prime number!" << endl;
			return 0;
		}
	}
	
	cout << "It is a prime number" << endl;
}
