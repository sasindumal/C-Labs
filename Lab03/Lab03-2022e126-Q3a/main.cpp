#include <iostream>
using namespace std;

int main() {
    int sum_positive = 0;
    for (int i = 0; i < 10; ++i) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num > 0) {
            sum_positive += num;
        }
    }
    std::cout << "Sum of positive numbers: " << sum_positive << std::endl;
    return 0;
}
