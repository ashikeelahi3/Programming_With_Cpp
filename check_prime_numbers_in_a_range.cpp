// check prime number's between range
#include <iostream>
using namespace std;

int main() {
	int low, high, count = 0, arr[100];
	cout << "Enter lowest number: ";
	cin >> low;
	
	cout << "Enter highest number: ";
	cin >> high;
	
	if(low < 2) {
		low = 2;
	}
	
	for(int i = low; i <= high; i++) {
		
		// calculate for prime
		int flag = 1;
		for(int j = 2; j <= i/2; j++) {
			if(i%j == 0) {
				flag = 0;
				break;
			}
		}
		// if prime, add the prime
		if(flag == 1) {
			arr[count] = i;
			count++;
		}
	}
	
	// Output
	cout << "There are " << count << " prime number between " << low << " to " << high << endl;
	cout << "Prime numbers are: ";
	for(int i = 0; i < count; i++) {
		cout << arr[i] << ", ";
	}
}
