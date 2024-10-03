#include <iostream>

using namespace std;

int main()
{
    string input;
    cout << "Input integer or type end to exit" << endl;

    while (true) {
        cin >> input;
        if (input == "end") {
            break;
        } else {
            int c = stoi(input);
            cout << c << " + 5 = " << c + 5 << endl;
            cout << c << " - 5 = " << c - 5 << endl;
            cout << "(" << c << " + 5) - 2 = " << (c + 5)-2 << endl;
            cout << "(" << c << " + 5) * 2 / (" << c << " + 3) = " << (c + 5) * 2 / (c + 3) << endl;
        }
    }
}