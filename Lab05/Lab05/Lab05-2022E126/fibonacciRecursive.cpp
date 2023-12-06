// MALHARA R.M.Y.S
// 2022/E/126
// EC2010
// Group: C
// Lab: 05
// Program Description: Q1 Task01
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.



#include<iostream>
using namespace std;

int fibonacciRecursive(int n) {
    if(n <= 1)
        return n;
    else
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Fibonacci number is: " << fibonacciRecursive(n);
    return 0;
}
