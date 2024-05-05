#include <iostream>

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

    return 0;
}
