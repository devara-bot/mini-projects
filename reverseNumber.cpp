#include <iostream>

using namespace std;

int main() {
    int n;
    float reversedNumber = 0, remainder;

    cout << "Enter number: ";
    cin >> n;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}