#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string binaryString;
    cin >> binaryString;  // Read the 80-character binary string

    unordered_map<string, char> binaryToDigit;

    // Read the next 10 lines and store them in the map
    for (char digit = '0'; digit <= '9'; digit++) {
        string binaryCode;
        cin >> binaryCode;
        binaryToDigit[binaryCode] = digit;
    }

    // Decode the password
    string password;
    for (int i = 0; i < 80; i += 10) {
        string segment = binaryString.substr(i, 10);
        password += binaryToDigit[segment];
    }

    // Output the restored password
    cout << password << endl;

    return 0;
}
