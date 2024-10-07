#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message;
}

void logTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = ";
        log (to_string(num * i), true);
    }
    log("\n", false);
}

int main()
{
    int num1,  num2,  num3;

    log("Input first integer : ", false);
    cin >> num1;
    log("Input second integer : ", false);
    cin >> num2;
    log("Input third integer : ", false);
    cin >> num3;

    logTable(num1);
    logTable(num2);
    logTable(num3);
}