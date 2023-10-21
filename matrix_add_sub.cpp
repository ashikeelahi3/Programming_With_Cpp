// Matrix addition and subtraction
/*
1. Variable declaration
2. Input rows and columns
3. Input matrix
4. Addition or subtraction
5. Output
*/

#include <iostream>
using namespace std;

int main() {
	// 1. Variable declaration
	double matA[100][100], matB[100][100], sum[100][100], sub[100][100];
	int row, col;
	
	// 2. Input rows and columns
	cout << "How many rows and columns in your matrix:" << endl;
	cin >> row >> col;
	
	// 3. Input matrix
	// Input A
	cout << "Input matrix A: " << endl;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cin >> matA[i][j];
		}
	}
	
	// Input B
	cout << "Input matrix B: " << endl;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cin >> matB[i][j];
		}
	}
	
	
	// 4. Addition or subtraction
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			sum[i][j] = matA[i][j] + matB[i][j];
			sub[i][j] = matA[i][j] - matB[i][j];
		}
	}
	
	// 5. Output
	// Output Matrix A + B
	cout << "matrix A + matrix B: " << endl;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	
	// Output Matrix A - B
	cout << "matrix A - matrix B: " << endl;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cout << sub[i][j] << " ";
		}
		cout << endl;
	}
}
