#include <iostream>
#include <string>
using namespace std;

// Main function: Outputs user's name, hometown, and age
int main() {
    // Variable declaration
    string name, hometown;
    int age;

    // User input
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Enter your hometown: ";
    getline(cin, hometown);
    cout << "Enter your age: ";
    cin >> age;

    // Output on new lines using a single cout
    cout << "Name: " << name << "\nHometown: " << hometown << "\nAge: " << age << endl;
    return 0;
}
