// Check if a string is a palindrome

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int flag = 1;
	
	cout << "Enter a string for checking is it a palindrome" << endl;
	getline(cin, str);
	
	int n = str.length();
	for(int i = 0; i < n/2; i++) {
		if(str[i] != str[n-i-1]) {
			flag = 0;
			break;
		}
	}
	
	// checking
	if(flag == 1) {
		cout << "The string is a palindrome" << endl;
	} else {
		cout << "The string is not a palindrome" << endl;
	}
}
