#include <iostream>
using namespace std;

double matrix[100][100];

void displayValue(double arr[][100], int n);
void minorMatCalc(double mat[100][100], double minorMat[100][100], int mRow, int mCol, int n);
double det(double mat[][100], int n);
void adjCalc(double mat[100][100], double adjMat[100][100], int n);
void InverseCalc(double mat[100][100], double invMat[100][100], int n);



int main() {
	int n = 4;
	double A[4][4] = {
		{ 1, 2, 3, 4},
		{ 4, 3, 2, 1},
		{ 2, 3, 5, 6},
		{ 2, 5, 6, 7}
	};
//	int n = 3;
//	double A[3][3] = {
//		{ 1, 2, 3},
//		{ 4, 3, 2},
//		{ 2, 3, 5}
//	};
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++){
			matrix[i][j] = A[i][j];
		}
	}
	
	
	double invMat[100][100];
	InverseCalc(matrix, invMat, n);
	
	
	cout << "Main matrix: " << endl;
	displayValue(matrix, n);
	
	
	cout << "Inv : " << endl;
	displayValue(invMat, n);
}







void minorMatCalc(double mat[100][100], double minorMat[100][100], int mRow, int mCol, int n ) {
	int r1 = 0;
	for(int i = 0; i < n; i++) {
		if(mRow == i) {
			continue;
		}
		int c1 = 0;
		for(int j = 0; j < n; j++) {
			if(mCol == j) {
				continue;
			}
			minorMat[r1][c1] = mat[i][j];
			c1++;
		}
		r1++;
	}	
}

double det(double mat[][100], int n) {
	if(n == 2) {
		return ( mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1] );
	}
	double result = 0;
	for(int i = 0; i < n; i++) {
		double tempMat[100][100];
		
		minorMatCalc(mat, tempMat, i, 0, n);  // main matrix, minorMatrix, minorRow, minorColumn, order
		
		if(i % 2 == 0) {
			result += mat[i][0] * det(tempMat, n-1);
		} else {
			result -= mat[i][0] * det(tempMat, n-1);
		}
	}
	return result;
}


void adjCalc(double mat[100][100], double adjMat[100][100], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			double tempMat[100][100];
			minorMatCalc(mat, tempMat, i, j, n );
			if((i+j) % 2 == 0) {
				adjMat[j][i] = det(tempMat, n-1);
			} else {
				adjMat[j][i] = - det(tempMat, n-1);
			}
		}
	}
}

void InverseCalc(double mat[100][100], double invMat[100][100], int n) {
	
	double detA = det(mat, n);
	
	double adjA[100][100];
	adjCalc(matrix, adjA, n);
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			invMat[i][j] = adjA[i][j] / detA;
		}
	}
	
	
}


void displayValue(double arr[][100], int n) {
	for(int i = 0; i < n; i++ ) {
		cout << "\t";
		for(int j = 0; j < n; j++) {
			double num = arr[i][j];
			
			if(num > 99 ) {
				cout << " " << num << " ";
			} else if (num < -99) {
				cout << num << " ";
			} else if (num > 10) {
				cout << " " << num << "  ";
			} else if (num < -10) {
				cout << num << "  ";
			} else if (num >= 0) {
				cout << " " << num << "   ";
			} else if (num < 0) {
				cout << num << "   ";
			} else {
				cout << num << "  ";
			}
		} 
		cout << endl;
	}
}


