
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;

    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    cout << "Sum of digits of " << num << " = " << sum << endl;

    return 0;
}

