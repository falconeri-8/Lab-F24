#include <format>
#include <iostream>

using namespace std;

void spacing() { cout << "------------------" << endl; }

void output(int first, int second, char expression, int result)
{
    cout << format("{} {} {} = ", first, expression, second) << result << endl;
}

int main()
{
    char expression;
    int first;
    int second;

    while (true) {
        spacing();
        cout << "Enter arithmetic expressions to be evaluated +, -, *, /, %" << endl;
        cout << "Enter first number : " ;
        cin >> first;
        cout << "Enter operator : " ;
        cin >> expression;
        cout << "Enter second number : " ;
        cin >> second;

        switch (expression) {
        case('+'):
            output(first, second, '+', first + second);
            break;
        case('-'):
            output(first, second, '-', first - second);
            break;
        case('*'):
            output(first, second, '*', first * second);
            break;
        case('/'):
            output(first, second, '/', first / second);
            break;
        case('%'):
            output(first, second, '%', first % second);
            break;
        default:
            cout << "Invalid Operator" << endl;
        }
    }
    return 0;
}