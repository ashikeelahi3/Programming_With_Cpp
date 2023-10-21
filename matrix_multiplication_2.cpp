/* Matrix Multiplication
1. variable declaration
2. set rows and columns
3. input matrix A and matrix B
4. Calculation
5. Output
*/

#include <iostream>
using namespace std;

int main() {
	double matA[100][100], matB[100][100], mult[100][100];
	int r1, c1, r2, c2;
	
	cout << "In multiplication, column of matA must be equal to row of matB" << endl;
	do{
		cout << "Rows and columns in matrix A" << endl;
		cin >> r1 >> c1;
		
		cout << "Rows and columns in matrix B" << endl;
		cin >> r2 >> c2;
	} while (c1 != r2);
	
	
	// input A
	cout << "Enter matrix A:" << endl;
	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c1; j++) {
			cin >> matA[i][j];
		}
	}
	
	// input B
	cout << "Enter matrix B:" << endl;
	for(int i = 0; i < r2; i++) {
		for(int j = 0; j < c2; j++) {
			cin >> matB[i][j];
		}
	}
	
	// C_ij = sum(A_ik*B_kj)
	
	// calculation (mult)
	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c2; j++) {
			double sum = 0;
			for(int k =0; k < r2; k++) {
				sum += matA[i][k] * matB[k][j];
			}
			mult[i][j] = sum;
		}
	}
	
	// output
	cout << "Multiplication of MatA and MatB" << endl;
	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c2; j++) {
			cout << mult[i][j] << " ";
		}
		cout << endl;
	}
	
}
