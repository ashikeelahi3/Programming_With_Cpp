#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	double AM, GM, HM, MD;
	double ams, gms, hms, mds;
	ams = hms = mds = 0;
	gms = 1;
	
	double arr[100];
	
	cout << "Enter n" << endl;
	cin >> n;
	
	cout << "Enter data" << endl;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for(int i = 0; i<n; i++) {
		ams += arr[i];
		gms *= arr[i];
		hms += 1/arr[i];
	}
	
	AM = ams / n;
	GM = pow(gms, 1.0/n);
	HM = n / hms;
	
	for(int i = 0; i < n; i++) {
		mds += abs(arr[i] - AM);
	}
	
	MD = mds / n;
	
	cout << "AM: " << AM << endl;
	cout << "GM: " << GM << endl;
	cout << "HM: " << HM << endl;
	cout << "Mean Dev: " << MD << endl;
}
