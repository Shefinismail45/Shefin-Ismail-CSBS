
#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, originalNum;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        int remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reverse) {
        cout << originalNum << " is a palindrome number." << endl;
    } else {
        cout << originalNum << " is not a palindrome number." << endl;
    }

    return 0;
}


