#include <iostream>
using namespace std;

// Function: Checks if a number is even or odd
string checkEven(int number) {
    if (number % 2 == 0) {
        return "The provided number is even";
    } else {
        return "The provided number is odd";
    }
}

// Main function: Handles user input and calls checkEven
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << checkEven(num) << endl;
    return 0;
}
