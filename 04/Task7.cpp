#include <iostream>

using namespace std;

int main() {
    int marks;
    const string message = "Student awarded with ";
    cout << "Enter student marks to get their grade : ";
    cin >> marks;
    marks /= 10;

    // Cases without breaks do not pause
    switch (marks) {
    case 10:
    case 9:
    case 8:
        cout << "The student passed with an A Grade." << endl;
        break;
    case 7:
        cout << "The student passed with a B Grade." << endl;
        break;
    case 6:
        cout << "The student passed with a C Grade." << endl;
        break;
    case 5:
        cout << "The student passed with a D Grade." << endl;
        break;
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "The student failed with an F Grade." << endl;
        break;
    default:
        cout << "Invalid score was entered. No Grade can be generated." << endl;
        break;
    }

    return 0;
}
