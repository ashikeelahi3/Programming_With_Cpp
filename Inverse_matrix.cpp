/*
Inverse
1. variable declaration
2. input rows and cols (n*n)
3. matrix input
4. Create Augmented Matrix
5. Inverse calculation
6. Extract Inverse matrix
7. Output
*/

#include <iostream>
using namespace std;

int main() {
	// variable declaration
	double matA[100][100], invMat[100][100], augMat[100][200];
	int n;
	
	// input rows and cols
	cout << "Input rows in your square matrix: ";
	cin >> n;
	
	// input matrix
	cout << "Input matrix A" << endl;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> matA[i][j];
		}
	}
	
	// create augmented matrix
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			augMat[i][j] = matA[i][j];
			augMat[i][j+n] = (i==j) ? 1 : 0;
		}
	}
	
	
	// Inverse matrix calculation
	for(int i = 0; i < n; i++) {
		double pivot = augMat[i][i];
		// divided by ith pivot
		for(int j = 0; j < 2*n; j++) {
			augMat[i][j] /= pivot;
		} 
		// Create 0
		for(int j = 0; j < n; j++) {
			if(i != j) {
				double factor = augMat[j][i];
				// subtracting
				for(int k = 0; k < 2*n; k++) {
					augMat[j][k] -= factor*augMat[i][k];
				}
			}
		}
	}
	

	// Extract Inverse
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			invMat[i][j] = augMat[i][j+n];
		}
	}
	
	// output inv
	cout << "Inverse matrix: " << endl;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << invMat[i][j] << " ";
		}
		cout << endl;
	}
}
