// Matrix Transpose
/*
1. variable declaration
2. input rows and columns
3. Input matrix
4. Transpose
*/

#include <iostream>
using namespace std;

int main() {
	// 1. variable decleration
	double matA[100][100];
	int row, col;
	
	// 2. input rows and columns
	cout << "How many rows and columns in your matrix:" << endl;
	cin >> row >> col;
	
	// 3. Input matrix // 2D array -> 2 loop
	cout << "Input matrix:" << endl;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cin >> matA[i][j];
		}
	}
	
	// 4. Transpose
	cout << "Transpose:" << endl;
	for(int i = 0; i < col; i++) {
		for(int j = 0; j < row; j++) {
			cout << matA[j][i] << " ";
		}
		cout << endl;  // line break for each row
	}
}
