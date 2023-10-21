// Count the number of vowels in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int count = 0;
	
	cout << "Enter a string for count the number of vowels in a string" << endl;
	getline(cin, str);
	
	int n = str.length();
	for(int i = 0; i<n; i++) {
		switch (str[i]){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				count++;
		}			
	}
	
	cout << "There are " << count << " vowels in the string." << endl;
}
