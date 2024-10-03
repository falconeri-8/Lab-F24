#include <iostream>

using namespace std;

int main()
{
    char expression;
    int first;
    int second;

    while (true) {
        cout << "List of operations +, -, *, /, %" << endl;
        cout << "Enter first number" << endl;
        cin >> first;
        cout << "Enter operator" << endl;
        cin >> expression;
        cout << "Enter second number" << endl;
        cin >> second;

        switch (expression) {
        case('+'):
            cout << first + second << endl;
            break;
        case('-'):
            cout << first - second << endl;
            break;
        case('*'):
            cout << first * second << endl;
            break;
        case('/'):
            cout << first / second << endl;
            break;
        case('%'):
            cout << first % second << endl;
            break;
        default:
            cout << "Invalid Operator" << endl;
        }
    }
    return 0;
}