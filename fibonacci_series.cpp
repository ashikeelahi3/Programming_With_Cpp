// Print the Fibonacci series up to N terms
#include <iostream>
using namespace std;

int main() {
	int n, prev, curr, next;
	
	cout << "Enter n: ";
	cin >> n;
	
	prev = 1;
	curr = 1;
	cout << "Fibonacci Series: " << prev << ", " << curr << ", ";
	for(int i = 1; i < n-1; i++) {
		next = prev + curr;
		cout << next << ", ";
		prev = curr;
		curr = next;
	}
}
