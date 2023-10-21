/*
Regression, correlation
1. variable declaration
2. input number of pairs (n)
3. input pairs and calculate sum
4. calculation
	i) mean
	ii) variance
	iii) covariance
5. output

*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	// variable declaration
	int n;
	double x, y, sumX, sumY, sumX2, sumY2, sumXY;
	double meanX, meanY, varX, varY, covXY;
	double corr, a, b;
	sumX = sumY = sumX2 = sumY2 = sumXY = 0;
	
	// input number of pairs (n)
	cout << "Enter number of paris: ";
	cin >> n;
	
	// input pairs
	cout << "Input paris" << endl;
	for(int i = 0; i < n; i++) {
		cin >> x >> y;
		sumX += x;
		sumY += y;
		sumX2 += x*x;
		sumY2 += y*y;
		sumXY += x*y;
	}
	
	// mean
	meanX = sumX / n;
	meanY = sumY / n;
	
	// variance
	varX = sumX2/n - (meanX*meanX);
	varY = sumY2/n - (meanY*meanY);
	
	// covariance
	covXY = sumXY/n - meanX*meanY;
	
	corr = covXY / sqrt(varX*varY);
	
	b = covXY / varX;
	a = meanY - b*meanX;
	
	cout << "Correlation between X and Y is " << corr << endl;
	cout << "Regression model: Y = " << a << " + " << b << "X" << endl; 
}
