#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message; // Ternary "?" statement
}

int main()
{
    int first;
    int second;
    log ("------------------", true);
    log ("Get greater number", true);
    log ("Input first number : ", false);
    cin >> first;
    log ("Input second number : ", false);
    cin >> second;

    if (first > second)
    {
        log (to_string(first) + " is greater", true);
    }
    else if (first < second)
    {
        log (to_string(second) + " is greater", true);
    }
    else
    {
        log ("Invalid inputs", true);
    }
    return 0;
}