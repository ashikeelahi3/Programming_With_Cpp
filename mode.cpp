#include <iostream>
using namespace std;


int main() {
    int n;
	double arr[100];
    cout << "Enter the value of n" << endl;
    cin >> n;
   
    cout << "Enter your data." << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
    
    // mode = highest frequency
    double mode = arr[0];
    int maxCount = 1;
   
    for(int i = 0; i<n-1; i++) {
        int count = 1;
        // compare
        for(int j = i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        // updating mode and maxCount
        if(count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    } 
    cout << "Mode = " << mode << endl; 
}

