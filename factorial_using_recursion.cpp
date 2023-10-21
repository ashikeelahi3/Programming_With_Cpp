/*
Recursion in programming is a process or a function that calls itself,
usually with a different or smaller input, until a condition is met


n! = n*(n-1)!
5! = 5*4! = 5*4*3! = 5*4*3*2! = 5*4*3*2*1!
*/


#include <iostream>
using namespace std;

// function
int factF(int n) {
    if(n == 0) {
        return 1;
    } else if(n == 1) {
        return 1;
    }
    return n * factF(n-1);
}

int main() {
    int n, fact;
   
    cout << "Enter the value of n: ";
    cin >> n;
   
    fact = factF(n);
    cout << n << "! = " << fact << endl; 
}

