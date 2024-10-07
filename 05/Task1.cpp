#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message;
}

int getFactorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int number;
    log("Input Integer to get the factorial", true);

    cin >> number;
    log(to_string(getFactorial(number)), true);
}