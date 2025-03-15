#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int lower, upper;

    cout << "Enter the lower limit of the range: ";
    cin >> lower;
    cout << "Enter the upper limit of the range: ";
    cin >> upper;

    cout << "Armstrong numbers between " << lower << " and " << upper << " are: " << endl;
    for (int i = lower; i <= upper; i++) {
        int temp = i, sum = 0, digits = 0;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
        temp = i;
        while (temp != 0) {
            int remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }
        if (sum == i) {
            cout << i << endl;
        }
    }

    return 0;
}


