#include <iostream>
#include <cmath>
using namespace std;

int main() {

    string input;
    cout << "Input character to get its ASCII value or type end to exit" << endl;

    while (true) {
        cin >> input;
        if (input == "end") {
            break;
        } else if (input.length() == 1) {
            int asciiValue = input[0];
            cout << asciiValue << endl;
        }
    }

    return 0;
}