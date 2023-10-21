/* 
Inverse matrix
1. variable declaration
2. input matrix order 
3. input matrix
4. create augmented matrix
5. inverse calculation
6. extract inverse
7. output
*/

#include <iostream>
using namespace std;

int main() {
	double matA[100][100], invMat[100][100], augMat[100][200];
	int n;
	
	// input n
	cout << "Order of your matrix: ";
	cin >> n;
	
	// input matrix
	cout << "Input your matrix:" << endl;
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
	
	// calculate inverse
	for(int i = 0; i < n; i++) {
		double pivot = augMat[i][i];
		
		if(i == n-1 && pivot == 0) {
			cout << "Inverse does not exist" << endl;
			return 0; 
		} else if(pivot == 0) {
			// finding proper row
			int x;
			for(int j = i+1; j < n; j++) {
				if(augMat[j][i] != 0) {
					x = j;
					break;
				}
			}
			for(int j = 0; j < 2*n; j++) {
				double temp = augMat[i][j];
				augMat[i][j] = augMat[x][j];
				augMat[x][j] = temp;
			
			}
			pivot = augMat[i][i];
			
		}
		
		for(int j = 0; j < 2*n; j++) {
			augMat[i][j] /= pivot;
		}
		
		for(int j = 0; j < n; j++) {
			if(i != j) {
				double factor = augMat[j][i];
				for(int k = 0; k < 2*n; k++) {
					augMat[j][k] -= factor*augMat[i][k];
				}
			}
		}
	}
	
	
	// Extract inverse
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			invMat[i][j] = augMat[i][j+n];
		}
	}
	
	// output 
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << invMat[i][j] << " ";
		}
		cout << endl;
	}
}

