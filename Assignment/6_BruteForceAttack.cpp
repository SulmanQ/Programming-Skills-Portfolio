#include <iostream>
using namespace std;

// Main function: Password guessing loop
int main() {
    int input, attempts = 0;
    const int password = 12345;

    while (attempts < 5) {
        cout << "Enter password: ";
        cin >> input;
        if (input == password) {
            cout << "Welcome to the Secure Area" << endl;
            break;
        } else {
            attempts++;
            cout << "Incorrect password. Attempts left: " << (5 - attempts) << endl;
        }
    }

    if (attempts == 5) {
        cout << "Too many attempts. Authorities have been alerted!" << endl;
    }
    return 0;
}
