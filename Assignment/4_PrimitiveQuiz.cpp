#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Main function: Capital city quiz
int main() {
    string answer;

    // Ask the question
    cout << "What is the capital of France? ";
    getline(cin, answer);

    // Convert answer to lowercase for comparison
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    if (answer == "paris") {
        cout << "Correct answer!" << endl;
    } else {
        cout << "Wrong answer." << endl;
    }
    return 0;
}
