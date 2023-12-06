// MALHARA R.M.Y.S
// 2022/E/126
// EC2010
// Group: C
// Lab: 05
// Program Description: Q1 Task01
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.



#include <iostream>
using namespace std;

bool isTriangleNumber(int num, int n = 1) {
    if(num == 0)
        return true;
    else if(num < 0)
        return false;
    else
        return isTriangleNumber(num - n, n + 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isTriangleNumber(num))
        cout << num << " is a triangle number.";
    else
        cout << num << " is not a triangle number.";
    return 0;
}
