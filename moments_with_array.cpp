/*
Moments with array
1. varable declaration
2. input n
3. input numbers and calculate sums
4. calculate rm and output
5. calculate cm and output
6. calculate sk, kur and output
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// varable declaration
	int n;
	double x, s1, s2, s3, s4, r1, r2, r3, r4, c1, c2, c3, c4, sk, kur;
	double arr[100];
	
	// input n
	cout << "Input n: ";
	cin >> n;
	
	// input numbers
	cout << "Input values" << endl;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	// calculate sums
	s1 = s2 = s3 = s4 = 0;
	for(int i = 0; i < n; i++) {
		x = arr[i];
		s1 += x;
		s2 += pow(x, 2);
		s3 += pow(x, 3);
		s4 += pow(x, 4);
	}
	
	// calculate rm and output
	r1 = s1 / n;
	r2 = s2 / n;
	r3 = s3 / n;
	r4 = s4 / n;
	
	cout << "RM1 = " << r1 << endl;
	cout << "RM2 = " << r2 << endl;
	cout << "RM3 = " << r3 << endl;
	cout << "RM4 = " << r4 << endl;
	
	// calculate cm and output
	c1 = 0;
	c2 = r2 - pow(r1, 2);
	c3 = r3 - 3*r2*r1 + 2*pow(r1, 3);
	c4 = r4 - 4*r3*r1 + 6*r2*pow(r1, 2) - 3*pow(r1, 4);
	
	cout << "CM1 = " << c1 << endl;
	cout << "CM2 = " << c2 << endl;
	cout << "CM3 = " << c3 << endl;
	cout << "CM4 = " << c4 << endl;	
	
	// calculate sk, kur and output
	sk = pow(c3, 2) / pow(c2, 3);
	kur = c4 / pow(c2, 2);
	
	cout << "Skewness = " << sk << endl;
	cout << "Kurtosis = " << kur << endl;
}
