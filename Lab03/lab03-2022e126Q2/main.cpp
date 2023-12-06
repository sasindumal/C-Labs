// MALHARA R.M.Y.S
// 2022/E/126
// EC2010
//Group: C
// Lab: o3
// Program Description: Lab 03
// I certify that the code in the method function main of this project
// is entirely my own work.



#include <iostream>
using namespace std;

int main() {
    int monthNumber;

    cout << "Enter the month number (1-12): ";
    cin >> monthNumber;

    switch (monthNumber) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            cout << "31 Days";
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            cout << "30 Days";
            break;
        case 2: // February
            cout << "28";
            break;
        default:
            cout << "Invalid month number";
    }

    return 0;
}
