#include <iostream>

using namespace std;

int main() {
    string input;
    cout << "Convert centigrade into Fahrenheit or type end to exit" << endl;

    while (true) {
        cin >> input;
        if (input == "end") {
            break;
        } else {
            float c = stof(input);
            float f = 1.8 * c + 32;
            cout << f << " Fahrenheit" << endl;
        }
    }
}