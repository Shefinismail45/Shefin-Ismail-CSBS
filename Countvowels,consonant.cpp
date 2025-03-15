#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin.ignore();  // Ignore newline character
    getline(cin, str);

    int vowels = 0, consonants = 0;
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);  // Convert to lowercase
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}


