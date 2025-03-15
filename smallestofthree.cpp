#include <iostream>

int main() {
    int num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    if (num1 < num2) {
        if (num1 < num3) {
            std::cout << "Smallest number: " << num1 << std::endl;
        } else {
            std::cout << "Smallest number: " << num3 << std::endl;
        }
    } else {
        if (num2 < num3) {
            std::cout << "Smallest number: " << num2 << std::endl;
        } else {
            std::cout << "Smallest number: " << num3 << std::endl;
        }
    }

    return 0;
}

