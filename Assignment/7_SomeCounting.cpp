#include <iostream>
using namespace std;

// Main function: Demonstrates different for loop patterns
int main() {
    for (int i = 0; i <= 50; i++) cout << i << " ";
    cout << endl;

    for (int i = 50; i >= 0; i--) cout << i << " ";
    cout << endl;

    for (int i = 30; i <= 50; i++) cout << i << " ";
    cout << endl;

    for (int i = 50; i >= 10; i -= 2) cout << i << " ";
    cout << endl;

    for (int i = 100; i <= 200; i += 5) cout << i << " ";
    cout << endl;

    return 0;
}
