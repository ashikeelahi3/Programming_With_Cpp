// moments_using_function
#include <cmath>
#include <iostream>
using namespace std;

double rm(double arr[100], int n, int r) {
	double sum  = 0;
	for(int i = 0; i < n; i++) {
		sum += pow(arr[i], r);
	}
	return sum / n;
}

double cm(double arr[100], int n, int r) {
	double sum  = 0;
	double mean = rm(arr, n, 1);
	for(int i = 0; i < n; i++) {
		sum += pow((arr[i] - mean), r); // sum((Xi - mean)^r)
	}
	return sum / n;
}

double sk(double arr[100], int n) {
	double cm2 = cm(arr, n, 2);
	double cm3 = cm(arr, n, 3);
	
	return pow(cm3, 2) / pow(cm2, 3);
}

double kurt(double arr[100], int n) {
	double cm2 = cm(arr, n, 2);
	double cm4 = cm(arr, n, 4);
	
	return cm4 / (cm2*cm2);
}

int main() {
	int n;
	double arr[100];
	
	cout << "Enter n: ";
	cin >> n;
	
	cout << "Enter your data: " << endl;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cout << "RM1: " << rm(arr, n, 1) << endl;
	cout << "RM2: " << rm(arr, n, 2) << endl;
	cout << "RM3: " << rm(arr, n, 3) << endl;
	cout << "RM4: " << rm(arr, n, 4) << endl;
	
	cout << "CM1: " << cm(arr, n, 1) << endl;
	cout << "CM2: " << cm(arr, n, 2) << endl;
	cout << "CM3: " << cm(arr, n, 3) << endl;
	cout << "CM4: " << cm(arr, n, 4) << endl;
	
	cout << "SK: " << sk(arr, n) << endl;
	cout << "Kurt: " << kurt(arr, n) << endl;
} 
