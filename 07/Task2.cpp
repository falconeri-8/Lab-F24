#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message; // Ternary "?" statement
}

int main()
{
    int original, sale;

    log ("Calculate profit or loss", true);
    log ("Enter original price", true);
    cin >> original;
    log ("Enter sale price", true);
    cin >> sale;

    try
    {
        if (sale > original) {
            throw 101;
        }
        if (sale < original) {
            throw 102;
        } else
        {
            throw 100;
        }
    }
    catch (int code)
    {
        if (code == 101)
        {
            log ("Profit", true);
        }
        else if (code == 102)
        {
            log ("Loss", true);
        } else
        {
            log ("Original price", true);
        }
    }

}