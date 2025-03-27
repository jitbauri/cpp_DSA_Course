#include <iostream>
using namespace std;

void binToDec(int binNum) {
    int decNum = 0;
    int pow = 1;
    while (binNum > 0) {
        int lastDig = binNum % 10;
        decNum += lastDig * pow;
        pow *= 2;
        binNum /= 10;
    }
    cout << "Decimal value is: " << decNum << endl;
}

void decToBin(int decNum) {
    if (decNum == 0) {
        cout << "Binary value is: 0" << endl;
        return;
    }

    string binStr = ""; // Use a string to collect binary digits
    while (decNum > 0) {
        int rem = decNum % 2;
        binStr = to_string(rem) + binStr; // Prepend the digit to the string
        decNum /= 2;
    }
    cout << "Binary value is: " << binStr << endl;
}

int main() {
    int binNum;
    int decNum;

    cout << "Enter the decimal value: ";
    cin >> decNum;
    decToBin(decNum);

    // Uncomment to test binary to decimal conversion
    // cout << "Enter the binary number: ";
    // cin >> binNum;
    // binToDec(binNum);
    
    return 0;
}
