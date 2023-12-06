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

int fibonacciIterative(int n) {
    if(n <= 1)
        return n;
    int fib = 1;
    int prevFib = 1;

    for(int i = 2; i < n; ++i) {
        int temp = fib;
        fib += prevFib;
        prevFib = temp;
    }
    return fib;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Fibonacci number is: " << fibonacciIterative(n);
    return 0;
}
