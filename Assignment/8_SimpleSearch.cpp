#include <iostream>
#include <string>
using namespace std;

// Main function: Searches a name in a predefined array
int main() {
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string search;
    bool found = false;

    cout << "Enter a name to search: ";
    cin >> search;

    for (int i = 0; i < 6; i++) {
        if (names[i] == search) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << search << " found in the list." << endl;
    } else {
        cout << search << " not found." << endl;
    }
    return 0;
}
