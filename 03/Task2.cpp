#include <iostream>

using namespace std;

int main()
{
    int marks;
    const string message = "Student awarded with ";
    
    while (true) {
        cout << "Enter student marks to get their grade" << endl;
        cin >> marks;
        if (marks < 25) {
            cout << message << " Grade F" << endl;
        }
        else if (marks >= 25 && marks < 45) {
            cout << message << "Grade E" << endl;
        }
        else if (marks >= 45 && marks < 50) {
            cout << message << "Grade D" << endl;
        }
        else if (marks >= 50 && marks < 60) {
            cout << message << "Grade C" << endl;
        }
        else if (marks >= 60 && marks < 80) {
            cout << message << "Grade B" << endl;
        }
        else if (marks >= 80 && marks <= 100) {
            cout << message << "Grade A" << endl;
        }
        else {
            cout << "Invalid Input" << endl;
        }
    }
}