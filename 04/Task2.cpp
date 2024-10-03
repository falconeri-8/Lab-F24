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

        if (expression == '+') {
            output(first, second, '+', first + second);
        }
        else if (expression == '-') {
            output(first, second, '-', first - second);
        }
        else if (expression == '*') {
            output(first, second, '*', first * second);
        }
        else if (expression == '/') {
            output(first, second, '/', first / second);
        }
        else if (expression == '%') {
            output(first, second, '%', first % second);
        }
        else
        {
            cout << "Invalid Operator" << endl;
        }
    }

}