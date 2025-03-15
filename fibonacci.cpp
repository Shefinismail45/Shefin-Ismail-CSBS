#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    int t1 = 0, t2 = 1;
    std::cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        std::cout << t1 << " ";
        int nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    std::cout << std::endl;

    return 0;
}

