#include <iostream>

using namespace std;

int main()
{
    int marks;
    const string message = "Student awarded with ";

    while (true) {
        cout << "Enter student marks to get their grade" << endl;
        cin >> marks;
        if (marks < 49) {
            cout << message << " Grade F" << endl;
        }
        else if (marks >= 50 && marks <= 59) {
            cout << message << "Grade E" << endl;
        }
        else if (marks >= 60 && marks < 71) {
            cout << message << "Grade D" << endl;
        }
        else if (marks >= 72 && marks <= 84) {
            cout << message << "Grade C" << endl;
        }
        else if (marks >= 85 && marks <= 100) {
            cout << message << "Grade B" << endl;
        }
        else {
            cout << "Invalid Input" << endl;
        }
    }
}