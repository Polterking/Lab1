#include "sdt.h"
#UCHEBNAYA VERSIA

int main() {
    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    int sum = num1 + num2;
    std::cout << "The sum of the entered numbers: " << sum << std::endl;

    int difference = num1 - num2;
    std::cout << "The difference of the entered numbers: " << difference << std::endl;

    if (num2 != 0) {
        double division = static_cast<double>(num1) / num2;
        std::cout << "The division of the entered numbers: " << division << std::endl;
    } else {
        std::cout << "Division by zero is not allowed." << std::endl;
    }

    return 0;
}
