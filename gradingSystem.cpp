#include <iostream>

int main() {
    int marks;
    std::cout << "Enter your marks: ";
    std::cin >> marks;

    if (marks >= 90) {
        std::cout << "Grade A" << std::endl;
    } else if (marks >= 80) {
        std::cout << "Grade B" << std::endl;
    } else if (marks >= 70) {
        std::cout << "Grade C" << std::endl;
    } else {
        std::cout << "Grade D" << std::endl;
    }

    return 0;
}

