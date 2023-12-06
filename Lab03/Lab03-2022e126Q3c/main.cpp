#include <iostream>

int main() {
    int sum_positive = 0;
    int count = 0;
    do {
        int num;
        std::cout << "Enter a number: ";
        std::cin >> num;
        if (num > 0) {
            sum_positive += num;
        }
        count++;
    } while (count < 10);
    std::cout << "Sum of positive numbers: " << sum_positive << std::endl;
    return 0;
}
